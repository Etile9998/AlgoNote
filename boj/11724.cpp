#include <bits/stdc++.h>
using namespace std;

int n, m;
int u, v;
vector<int> a[1001];
bool check[1001];

void go(int x){
   if (check[x])return; 
   check[x] = true;
   for (size_t i = 0 ; i < a[x].size() ; i++){
        go(a[x][i]);
   }
}
void solve(){
    int ans = 0;
    for (int i = 1 ; i <= n ; i++){
        if (!check[i]){
            ans++;
            go(i);
        }
    }
    cout << ans << '\n';
}

int main(){
    cin >> n >> m;
    for (int i = 0 ; i < m ; i++){
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    solve();    
    return 0;
}
