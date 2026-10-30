#include <bits/stdc++.h>
using namespace std;

int R, C;
vector <vector<int>> grid;
vector <int> filled;
bool isFilled;

void runtuh(){
    for (int x : filled){
        for (int c = 0; c < C; c++){
            grid[x][c] = 0;
        }
    }

    vector<int> lowest0s;
    for (int c = 0; c < C; c++){
        int lowest0 = 0;
        for (int r = filled[filled.size()-1]; r < R; r++){
            if (grid[r][c] == 1)
                break;
            lowest0 = r;
        }
        lowest0s.push_back(lowest0);
    }

    for (int c = 0; c < C; c++){
        for (int r = lowest0s[c]; r >= 0; r--){
            if (grid[r][c] == 1){
                grid[r][c] = 0;
                grid[lowest0s[c]][c] = 1;
                lowest0s[c]--;
            }
        }
    }

    filled.clear();

    for (int r = 0; r < R; r++){
        isFilled = 1;
        for (int c = 0; c < C; c++){
            if (grid[r][c] == 0)
                isFilled = 0;
        }
        if (isFilled)
            filled.push_back(r);
    }

    if(!(filled.empty()))
        runtuh();
}

int main(){
    cin >> R >> C;
    grid.resize(R);
    for (int i = 0; i < R; i++){
        string s; cin >> s;
        isFilled = 1;
        for (char x : s){
            grid[i].push_back(x - '0');
            if (x == '0')
                isFilled = 0;
        }
        if (isFilled)
            filled.push_back(i);
    }
    
    if(!(filled.empty()))
        runtuh();

    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j ++)
            cout << grid[i][j];
        cout << endl;
    }
        
}