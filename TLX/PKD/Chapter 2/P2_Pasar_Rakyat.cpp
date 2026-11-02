#include <bits/stdc++.h>
using namespace std;

int gcdeuclid(int a, int b){
    if (b == 0)
        return a;
    return gcdeuclid(b, a % b);
}

int lcmkeren(int a, int b){
    return a*b / gcdeuclid(a,b);
}

int N, A, B, hasil;

int main(){
    cin >> N;
    cin >> A >> B;
    hasil = lcmkeren(A,B);
    N -= 2;
    while (N--){
        cin >> A;
        hasil = lcmkeren(hasil, A);
    }
    cout << hasil;
}