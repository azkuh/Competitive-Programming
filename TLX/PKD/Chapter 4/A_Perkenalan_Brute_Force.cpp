#include <bits/stdc++.h>
using namespace std;

string s, target;

string brutpors(){
    for (int i = 0; i < s.size(); i++){
        string s_new;
        for (int j = 0; j < s.size(); j++){
            if (j == i)
                continue;
            s_new += s[j];
        }

        if (s_new == target)
            return "Tentu saja bisa!";
    }
    return "Wah, tidak bisa :(";
}

int main(){
    cin >> s >> target;
    cout << brutpors();
}