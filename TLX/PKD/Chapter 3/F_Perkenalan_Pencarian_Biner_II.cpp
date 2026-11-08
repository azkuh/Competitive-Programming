#include <bits/stdc++.h>
using namespace std;

int N, Q, x, A[100005];

int binser(int target){
    int l = 1, r = N;
    while (l <= r){
        int mid = l + (r - l) / 2;
        if (A[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return l;
}

int main(){
    cin >> N;
    for (int i = 1; i <= N; i++){
        cin >> A[i];
        A[i] += A[i-1];
    }
    cin >> Q;
    while (Q--){
        cin >> x;
        cout << binser(x) << endl;
    }
}