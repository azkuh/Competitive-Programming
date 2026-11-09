#include <bits/stdc++.h>
using namespace std;

int M, N, B, K, exploded;
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

    cin >> B >> K;
    explode(grid[B][K], B, K);
    cout << exploded * (exploded-1);
}