#include <bits/stdc++.h>
using namespace std;

int N, Q;
vector <int> bebek;

int binser(int X){
    int l = 0, r = N - 1;
    while (l <= r){
        int mid = l + (r - l) / 2;
        if (bebek[mid] <= X)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return l;
}

int main(){
    cin >> N;
    for (int i = 0; i < N; i++){
        int x; cin >> x; bebek.push_back(x);
    }

    cin >> Q;
    while (Q--){
        int X, Y;
        cin >> X >> Y;

        int lower = binser(X), upper = binser(Y);
        
        cout << upper - lower << endl;
    }
}