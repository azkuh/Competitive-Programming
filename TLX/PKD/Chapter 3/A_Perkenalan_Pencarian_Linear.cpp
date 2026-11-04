#include <bits/stdc++.h>
using namespace std;

int N, X, num, diff, ans;

int main(){
    cin >> N >> X;
    cin >> ans;
    diff = abs(X - ans);
    N--;
    while (N--){
        cin >> num;
        if (abs(X - num) < diff or (abs(X - num) == diff and num < ans)){
            ans = num;
            diff = abs(X - num);
        }
    }
    cout << ans;
}