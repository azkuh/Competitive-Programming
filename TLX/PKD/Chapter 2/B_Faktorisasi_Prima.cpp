#include <bits/stdc++.h>
using namespace std;

int N;
vector <pair<int,int>> faktor;

int main(){
    cin >> N;
    for (int i = 2; N != 1; i++){
        int pangkat = 0;
        while (N % i == 0){
            N /= i;
            pangkat++;
        }
        if (pangkat)
            faktor.push_back({i,pangkat});
    }

    reverse(faktor.begin(), faktor.end());
    for (int i = faktor.size()-1; !faktor.empty(); i--){
        int pangkat = faktor[i].second;
        int angka = faktor[i].first;
        cout << angka;
        if (pangkat != 1)
            cout << '^' << pangkat;
        faktor.pop_back();
        if(!faktor.empty())
            cout << " x ";
    }
}