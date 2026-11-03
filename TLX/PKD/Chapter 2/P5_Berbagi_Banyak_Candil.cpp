#include <bits/stdc++.h>
using namespace std;

long long B, C, D, m;
set <long long> possible_bebeks;

int main(){
    cin >> B >> C >> D;
    m = C - D;
    for (long long b = 1; b*b <= m and b <= B; b++){
        if (m % b == 0){
            if (b > D)
                possible_bebeks.insert(b);
            if (m/b > D and m/b <= B)
                possible_bebeks.insert(m/b);
        }
    }
    if (C == D and B > C)
        cout << B - C;
    else
        cout << possible_bebeks.size();
}