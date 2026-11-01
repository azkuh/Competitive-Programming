#include <bits/stdc++.h>
using namespace std;

long long A, B, C, D, E, F, sederhana;

int gcdeuclid(long long a, long long b){
    if (b == 0)
        return a;
    return gcdeuclid(b, a % b);
}

int main(){
    cin >> A >> B >> C >> D;
    F = B * D / gcdeuclid(B, D);
    E = A * (F/B) + C * (F/D);

    sederhana = gcdeuclid(F, E);
    F /= sederhana;
    E /= sederhana;
    cout << E << ' ' << F;
}