#include <bits/stdc++.h>
using namespace std;

int A, B, N, hasil;
vector <vector<int>> combin(1005);
const int MOD = 1000000007;

void pascal(){
    combin[0].push_back(1);
    for (int i = 1; i <= N; i++){
        combin[i].push_back(1);
        for (int j = 1; j < i; j++)
            combin[i].push_back((combin[i-1][j] % MOD + combin[i-1][j-1] % MOD) % MOD);
        combin[i].push_back(1);
    }
}

int main(){
    cin >> N >> A >> B;
    pascal();
    for (int i = A; i <= B; i++){
        hasil = (hasil % MOD + combin[N][i] % MOD) % MOD;
    }
    cout << hasil;
}