#include <bits/stdc++.h>
using namespace std;

int w, h;
const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1,  1, -1,0, 1};

int a[50][50] = {0};
bool check[50][50] = {0};

void go(int x, int y){
    if (check[x][y])return;
    check[x][y] = true; 
}

void solve(){
    int ans = 0;
    for (int i = 0 ; i < w ; i++){
        for (int j = 0 ; j < h ; j++){
            cin >> a[i][j];
        }
    }
    
    for (int i = 0 ; i < w ; i++){
        for (int j = 0 ; j < h ; j++){
            if (check[i][j]){
                go(i, j);
                ans++;
            }
        }
    }

    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> w >> h;
    while(w){
        solve();
        memset(a, 0, sizeof a);
        memset(check, 0, sizeof check);
        cin >> w >> h;
    }
    return 0;
}
