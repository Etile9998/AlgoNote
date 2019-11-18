#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);(i)<(b);++i)
#define REP(i,n) FOR(i,0,n)
typedef int64_t ll;
typedef pair<int, int> pii;

int q;
int n;
int a[101];
int check[101]; // check
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);

    cin >> q;
    while(q--){
        // in
        cin >> n;
        FOR(i,1,n+1) {
            cin >> a[i];
            check[i] = 0;
        }

        // solve
        REP(j,n){
            for (int i = n ; i > 0 ;i--) {
                if (!check[i-1] && a[i-1] > a[i]){
                    swap(a[i-1], a[i]);
                    check[i-1] = 1;
                }
            }
        }

        // out
        FOR(i, 1, n+1){
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
