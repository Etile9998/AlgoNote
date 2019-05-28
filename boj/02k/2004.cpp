#include <bits/stdc++.h>
using namespace std;

typedef int64_t ll; 

int n, m;

int go(int x,int y){
    int ret = 0;
    ll d = y;
    while(d<=x){
       ret += x/d;
       d*=y;
    }
    return ret;
}

void solve(){
    int ans2 = go(n, 2) - go(m, 2) - go(n-m, 2);
    int ans5 = go(n, 5) - go(m, 5) - go(n-m, 5);
    int ans = min(ans2, ans5);
    cout << ans << '\n';
}
int main(){
    cin >> n >> m;
    solve();
    return 0;
}
