#include <bits/stdc++.h>
using namespace std;

int n;
string p1, p1_c, p2_c;
vector <char> huruf_c;
bool bingung, taken[30], taken_c[30];

int main(){
    cin >> n;
    cin >> p1 >> p1_c >> p2_c;

    huruf_c.assign(30, '?');
    for (int i = 0; i < n; i ++){
        int idx_p1_c = p1_c[i] - 'A';
        int idx_p1 = p1[i] - 'A';
        
        if((taken_c[idx_p1_c] or taken[idx_p1]) and huruf_c[idx_p1_c] != p1[i])
            bingung = 1;

        huruf_c[idx_p1_c] = p1[i];
        taken[idx_p1] = 1;
        taken_c[idx_p1_c] = 1;
    }

    if (bingung)
        cout << "Pak Dengklek bingung";
    else
    for (char c : p2_c)
        cout << huruf_c[c - 'A'];
}