#include <iostream>
#include <queue>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;

int t;
ull n, k;

#define mp make_pair
#define rep(i,a,b) for(int i=a;i<b;i++)

pll calcAns(ull t) {
    if (t % 2) { // 홀수
        return mp(t / 2, t / 2);
    }
    else {
        return mp(t / 2, t / 2 - 1);
    }
}

void proc(int tc) {
    cin >> n >> k;
    ull pos = 0;
    priority_queue<pll> pq;
    pll tmp;
    pq.push(mp(n, 1));

    do {
        cout << pos<<'\n';
        tmp = pq.top();
        pq.pop();
        pos += tmp.second;
        if (tmp.first % 2) {
            pq.push(mp(tmp.first / 2, tmp.second * 2));
        }
        else {
            pq.push(mp(tmp.first / 2, tmp.second));
            pq.push(mp(tmp.first / 2 - 1, tmp.second));
        }
    } while (pos < k);

    pll ans = calcAns(tmp.first);
    printf("Case #%d: %lld %lld\n", tc, ans.first, ans.second);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
#ifdef _CONSOLE
    freopen("C-large.in","r",stdin);
    freopen("C-large.out", "w", stdout);
#endif // !_Console
    cin >> t;
    rep(tc, 1, t + 1) {
        proc(tc);
    }
    return 0;
}
