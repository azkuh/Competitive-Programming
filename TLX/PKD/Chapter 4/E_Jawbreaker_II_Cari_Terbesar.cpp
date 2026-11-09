#include <bits/stdc++.h>
using namespace std;

int M, N, B, K, exploded, mx_exploded;
int grid[30][30], vis[30][30];
int x[4] = {0, 0, 1, -1};
int y[4] = {1, -1, 0, 0};

void explode(int num, int r, int c){
    vis[r][c] = 1;
    exploded++;
    for (int i = 0; i < 4; i++){
        int next_r = r + y[i], next_c = c + x[i];
        if (not(vis[next_r][next_c]) and grid[next_r][next_c] == num)
            explode(num, next_r, next_c);
    }
}

int main(){
    cin >> M >> N;
    for (int r = 0; r < M; r++){
        for (int c = 0; c < N; c++){
            cin >> grid[r][c];
        }
    }
    
    for (int r = 0; r < M; r++){
        for (int c = 0; c < N; c++){
            exploded = 0;
            if (not(vis[r][c]))
                explode(grid[r][c], r, c);
            if (mx_exploded < exploded)
                mx_exploded = exploded;
        }
    }
    
    cout << mx_exploded * (mx_exploded-1);
}