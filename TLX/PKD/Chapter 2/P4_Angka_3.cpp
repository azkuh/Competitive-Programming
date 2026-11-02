#include <bits/stdc++.h>
using namespace std;

int N, x;

string convert(){
    string hasil;
    while (N){
        hasil = char(N % x + '0') + hasil;
        N /= x;
    }
    return hasil;
}

int main(){
    cin >> N >> x;
    cout << convert();
}