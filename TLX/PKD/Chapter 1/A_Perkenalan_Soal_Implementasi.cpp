#include <bits/stdc++.h>
using namespace std;

int n,m;
int grid[200][200];

int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    for (int j = 0; j < m; j++){
        for (int i = n-1; i>=0 ; i--)
            cout << grid[i][j] << ' ';
        cout << endl;
    }
}