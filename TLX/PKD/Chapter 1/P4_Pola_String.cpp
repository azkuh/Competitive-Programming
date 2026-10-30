#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = sqrt(s.size()-1)+1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int keren = i*n + j*pow(-1,(i%2)) + (n-1)*(i%2);      
            if (keren > s.size()-1)
                cout << '.';
            else
                cout << s[keren];
        }
        cout << endl;
    }
}