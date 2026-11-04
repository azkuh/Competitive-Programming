#include <bits/stdc++.h>
using namespace std;

vector <double> values;
int N;

int main(){
    cin >> N;
    int len = N;
    bool isOdd = N % 2;
    while (N--){
        int x; cin >> x; values.push_back(x);
    }
    sort(values.begin(), values.end());

    cout << fixed << setprecision(1);

    if (isOdd)
        cout << values[len/2];
    else
        cout << (values[len/2] + values[len/2 - 1]) / 2;
}