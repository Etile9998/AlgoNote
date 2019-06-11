#include <bits/stdc++.h>
using namespace std;

int q;
int n;
int64_t k;
string s;
string ans;

int main(){
    cin.sync_with_stdio(false);
    cin.tie(0);

    cin >> q;
    while(q--){
        ans = "";
        cin >> n >> k;
        cin >> s;
        int cnt = 0;
        bool flag = 0;
        for (int i = 0 ; i < n ; i++){
            if (s[i] == '0'){
                if (cnt <= k) {
                    ans += '0';
                    k -= cnt;
                }
                else {
                    ans += string (cnt - k, '1');
                    ans += '0';
                    ans += string(k, '1');
                    ans += s.substr(i + 1);
                    flag = 1;
                    break;
                }

            }
            else { // s[i] == '1'
                cnt++;
            }
        }
        if (!flag)ans += string(cnt, '1');
        cout << ans << '\n';
    }
    return 0;
}
