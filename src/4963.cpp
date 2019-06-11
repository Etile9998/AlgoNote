#include <bits/stdc++.h>
using namespace std;

int w, h;
const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1,  1, -1,0, 1};

int a[50][50] = {0};

void go(int x, int y){
    a[x][y] = 0;
    for (int i = 0 ; i < 8 ; i++){
        int tx = x + dx[i];
        int ty = y + dy[i];
        if (0 <= tx && tx < h && 0 <= ty && ty < w && a[tx][ty]){
            go(tx, ty);
        }
    }
}

void solve(){
    int ans = 0;
    for (int i = 0 ; i < h ; i++){
        for (int j = 0 ; j < w ; j++){
            cin >> a[i][j];
        }
    }
    
    for (int i = 0 ; i < h ; i++){
        for (int j = 0 ; j < w ; j++){
            if (a[i][j]){
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
        cin >> w >> h;
    }
    return 0;
}
