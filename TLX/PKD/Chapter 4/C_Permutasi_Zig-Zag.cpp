#include <bits/stdc++.h>
using namespace std;

int N;
int vis[67];

void gen(string s){
    if (s.size() >= 3){
        for (int i = 1; i < s.size()-1; i++){
            if (not((s[i] < s[i-1] and s[i] < s[i+1]) or (s[i] > s[i-1] and s[i] > s[i+1])))
                return;
        }
    }
    if (s.size() == N)
        cout << s << endl;

    for (int i = 1; i <= N; i++){
        if(not(vis[i])){
            vis[i] = 1;
            gen(s + char(i + '0'));
            vis[i] = 0;
        }
    }
}

int main(){
    cin >> N;
    gen("");
}