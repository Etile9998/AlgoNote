#include <bits/stdc++.h>
using namespace std;

int n;
pair<int, int> a[500001];
void solve(){
    int ans = 0;
    stable_sort(a + 1, a + n + 1);
    for (int i = 1 ; i <= n ; i++){
        if (ans < a[i].second - i)
            ans = a[i].second - i;
    }
    ans += 1;
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1 ; i <=n ; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    solve();
    return 0;
}
