#include <bits/stdc++.h>
using namespace std;

int N, swap_cnt;
vector <int> cards;

int main(){
    cin >> N;
    for (int i = 0; i < N; i++){
        int x; cin >> x; cards.push_back(x);
    }

    for (int i = 0; i < N; i++)
        for (int j = 1; j < N; j++)
            if (cards[j] < cards[j-1]){
                swap(cards[j], cards[j-1]);
                swap_cnt++;
            }
    
    cout << swap_cnt;
}