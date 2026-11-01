#include <bits/stdc++.h>
using namespace std;

vector <int> primes;
bool elim[1000005];

void sieve(){
    int N = 1000000;
    for (long long i = 2; i <= N; i++){
        if(!elim[i]){
            for (long long j = i*i; j <= N; j += i){
                elim[j] = 1;
            }
            primes.push_back(i);
        }
    }
}

int main(){
    sieve();
    int tc; cin >> tc; while(tc--){
        int k; cin >> k; cout << primes[k-1] << endl;
    }
}