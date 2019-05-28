#include <bits/stdc++.h>
using namespace std;

int n;
int a[100];
void solve(){
    int64_t ans = 0;
    for (int i = 0 ; i < n ; i++){
        for (int j = i + 1 ; j < n ; j++){
            ans += gcd(a[i], a[j]);
        }
    }
    cout << ans << '\n'; 
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for (int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        solve();
    }
    return 0;
}
