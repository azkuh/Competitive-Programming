#include <bits/stdc++.h>
using namespace std;

int n,m,x;
vector <vector<int>> grid2(105, vector<int>(105));

void hori(vector <vector<int>> grid){
    for (int r = n-1, r2 = 0; r >= 0; r--, r2++)
        for (int c = 0; c < m; c++)
            grid2[r2][c] = grid[r][c];
}

void vert(vector <vector<int>> grid){
    for (int r = 0; r < n; r++)
        for (int c = m-1, c2 = 0; c >= 0; c--, c2++)
            grid2[r][c2] = grid[r][c];
}

void deg90(vector <vector<int>> grid){
    for (int c = 0; c < m; c++)
        for (int r = n-1, r2 = 0; r >= 0; r--, r2++)
            grid2[c][r2] = grid[r][c];
    int temp = n;
    n = m;
    m = temp;
}

int main(){
    cin >> n >> m >> x;
    for (int r = 0; r < n; r++)
        for (int c = 0; c < m; c++)
            cin >> grid2[r][c];

    for (int i = 0; i < x; i++){
        string op;
        cin >> op;
        if (op == "_") hori(grid2);
        else if (op == "|") vert(grid2);
        else if (op == "90") deg90(grid2);
        else if (op == "180"){
            deg90(grid2);
            deg90(grid2);
        }
        else{
            deg90(grid2);
            deg90(grid2);
            deg90(grid2);
        }
        
    }

    for (int r = 0; r < n; r++){
        for (int c = 0; c < m; c++)
            cout << grid2[r][c] << ' ';
        cout << endl;
    }
}