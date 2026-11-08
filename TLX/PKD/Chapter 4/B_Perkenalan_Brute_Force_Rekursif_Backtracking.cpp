#include <bits/stdc++.h>
using namespace std;

int N, K, hasil[100];

void brutfors(int depth){
    if (depth > K){
        for (int i = 1; i <= K; i++)
            cout << hasil[i] << ' ';
        cout << endl;
    }
    else
        for (int i = hasil[depth-1] + 1; i <= N; i++){
            hasil[depth] = i;
            brutfors(depth + 1);
        }
}

int main(){
    cin >> N >> K;
    brutfors(1);
}