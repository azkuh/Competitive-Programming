#include <bits/stdc++.h>
using namespace std;

int M, N, B, K, flooded;
pair <int, pair<int, int>> mx_flooded;
char grid[30][30];
bool vis[30][30];
int x[4] = {0, 0, 1, -1};
int y[4] = {1, -1, 0, 0};

void flood(char num, int r, int c){
    vis[r][c] = 1;
    flooded++;
    for (int i = 0; i < 4; i++){
        int next_r = r + y[i], next_c = c + x[i];
        if (not(vis[next_r][next_c]) and grid[next_r][next_c] == num)
            flood(num, next_r, next_c);
    }
}

void dotgrid(char num, int r, int c){
    grid[r][c] = '.';
    for (int i = 0; i < 4; i++){
        int next_r = r + y[i], next_c = c + x[i];
        if (grid[next_r][next_c] == num)
            dotgrid(num, next_r, next_c);
    }
}

void runtuh(){
    for (int c = 0; c < N; c++){
        for (int r = M - 1, dot_cur = M - 1; r >= 0; r--){
            swap(grid[dot_cur][c], grid[r][c]);
            if (grid[dot_cur][c] != '.')
                dot_cur--;
        }
    }
}

int main(){
    cin >> M >> N;
    for (int r = 0; r < M; r++)
        for (int c = 0; c < N; c++)
            cin >> grid[r][c];
    
    for (int r = 0; r < M; r++){
        for (int c = 0; c < N; c++){
            flooded = 0;
            if (not(vis[r][c]))
                flood(grid[r][c], r, c);

            if (mx_flooded.first < flooded)
                mx_flooded = {flooded, {r, c}};
        }
    }

    int r_runtuh = mx_flooded.second.first;
    int c_runtuh = mx_flooded.second.second;

    dotgrid(grid[r_runtuh][c_runtuh], r_runtuh, c_runtuh);
    runtuh();

    for (int r = 0; r < M; r++){
        for (int c = 0; c < N; c++)
            cout << grid[r][c] << ' ';
        cout << endl;
    }
}