#include <bits/stdc++.h>
using namespace std;

int N, K, A[100005], B;

int binser(int target){
    int l = 1, r = N;
    while (l <= r){
        int mid = l + (r - l) / 2;
        if (A[mid] <= target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return r;
}

int main(){
    cin >> N >> K;
    for (int i = 1; i <= N; i++){
        cin >> A[i];
        A[i] += A[i-1];
    }
    while (K--){
        cin >> B;
        cout << binser(B) << endl;
    }
}