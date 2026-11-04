#include <bits/stdc++.h>
using namespace std;

int N;
vector <string> names;

int main(){
    cin >> N;
    for (int i = 0; i < N; i++){
        string s; cin >> s; names.push_back(s);
    }

    for (int i = 0; i < N; i++){
        for (int j = 1; j < N; j++){
            string a = names[j-1], b = names[j];
            if (b.size() < a.size() or (b.size() == a.size() and b < a)){
                string temp = names[j];
                names[j] = names[j-1];
                names[j-1] = temp;
            }            
        }
    }

    for (string s : names)
        cout << s << endl;
}