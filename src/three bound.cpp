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

// binary search
int binary(int *a, int s, int e, int k) {
    int m;
    while (s <= e) {
        m = (s + e) / 2;
        if (a[m] == k)return m;
        if (a[m] < k)
            e = m - 1;
        else
            s = m + 1;
    }
    return -1;
}

// lower bound
// k이상 최초 인덱스
int lowerbound(int *a, int s, int e, int k) {
    int m;
    while (s < e) {
        m = (s + e) / 2;
        if (a[m] < k)
            s = m + 1;
        else
            e = m;
    }
    return s;
}

// upper bound
// k초과 최초 인덱스
int upperbound(int *a, int s, int e, int k) {
    int m;
    while (s < e) {
        m = (s + e) / 2;
        if (a[m] <= k)
            s = m + 1;
        else
            e = m;
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    // your code goes here
    int a[15] = { 2,2,2,3,3,3,4,4,4,6,6,6,7,7,7 };
    cout << binary(a, 0, 14, 1) << '\n';
    cout << lowerbound(a, 0, 15, 4) << '\n';
    cout << upperbound(a, 0, 15, 5) << '\n';
    return 0;
}