#include <bits/stdc++.h>
using namespace std;

long long B, K, berat, pangkat;
vector <long long> pemberat;

int main(){
    cin >> B >> K;
    berat = K - B;
    while (berat){
        if (berat % 2)
            pemberat.push_back(pow(2,pangkat));
        berat /= 2;
        pangkat++;
    }
    reverse(pemberat.begin(), pemberat.end());
    for (auto w : pemberat)
        cout << w << endl;
}