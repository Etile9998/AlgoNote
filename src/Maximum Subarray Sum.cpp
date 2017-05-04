#ifdef _CONSOLE
#include "bits/stdc++.h"
#else
#include <bits/stdc++.h>
#endif
using namespace std;

typedef long long ll;

#define rep(i,a,b) for(int i = a; i < b; ++i)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define mod 1000000007


// a[1 + len] = [0, a1, a2, ..., an];
// Maximum Subarray Sum
int mss(int *a, int len) {
    int ret = -mod;
    rep(i, 0, len) {
        if (a[i - 1] > 0)
            a[i] = a[i - 1] + a[i];
        ret = max(a[i], ret);
    }
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
#ifdef _CONSOLE
    freopen("sample.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // your code goes here
    int n;
    int a[100001] = { 0 };
    cin >> n;
    rep(i, 1, n + 1) {
        cin >> a[i];
    }

    cout << mss(a, n) << '\n';

    return 0;
}