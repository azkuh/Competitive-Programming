#include <bits/stdc++.h>
using namespace std;

int T, elim[1006767], ans[1006767];
vector <long long> primes;

void sieve(){
    int N = 1006767;
    for (long long i = 2; i < N; i++){
        if (elim[i] == 0){
            primes.push_back(i);
            for (long long j = i*i; j < N; j += i)
                elim[j] = 1;
        }
    }
}

void less_than_5_factors(){
    // 1, p, p^2, p^3, p*q and p != q
    int N = 1000000, N_sqrt = 1000, N_cbrt = 100;

    ans[1] = 1;
    for (int p : primes){
        if (p > N)
            break;
        ans[p] = 1;
        if (p <= N_sqrt)
            ans[p*p] = 1;
        if (p <= N_cbrt)
            ans[p*p*p] = 1;
    }

    for (int i = 0; i < N_sqrt + 10; i++){
        for (int j = i+1; primes[i]*primes[j] <= 1000000 ; j++){
            long long num = primes[i]*primes[j];
            ans[num] = 1;
        }
    }
    
}

int main(){
    cin >> T;
    sieve();
    less_than_5_factors();
    while(T--){
        int n;
        cin >> n;
        if (ans[n] == 1)
            cout << "YA";
        else
            cout << "BUKAN";
        cout << endl;
    }
}