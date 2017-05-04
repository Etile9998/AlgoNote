#include <iostream>
using namespace std;

#define rep(i,a,b) for(int i = a; i < b; ++i)
#define mod 1000000007
int t, e, f, n;
int P[50000], W[50000];
int S[10000];

void init() {
    S[0] = 0;
    rep(i, 1, f - e + 1) {
        S[i] = mod;
    }
}

void proc() {
    rep(i, 0, n) {
        rep(j, 0, f - e + 1) {
            if (S[j + W[i]] > S[j] + P[i])
                S[j + W[i]] = S[j] + P[i];
        }
    }
}

int main() {
    cin >> t;

    rep(tc, 0, t) {
        cin >> e >> f >> n;
        init();
        rep(i, 0, n) {
            cin >> P[i] >> W[i];
        }
        proc();
        if (S[f - e] == mod)
            cout << -1 << '\n';
        else
            cout << S[f - e] << '\n';
    }
    return 0;
}