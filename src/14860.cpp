#include <bits/stdc++.h>
using namespace std;

typedef int64_t ll;
ll n, m;
const int P = 1e9+7;

const int MAXN = 15000001;
bool prime[MAXN];

void sieve(){
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;
    for (int i = 4 ; i < MAXN ; i+= 2)
        prime[i] = 0;
    for (int i = 3 ; i * i <= MAXN ; i+=2){
        if(prime[i]){
            for (int j = i*i ; j <= MAXN ; j+=i){
                prime[j] = 0;
            }
        }
    }
}

ll power(ll x, ll y){
    if (y == 0) return 1;
    if (y == 1) return x;

    ll ret = 1;
    while(y){
        if (y % 2 == 1) ret = ret * x % P;
        x = x * x % P;
        y /= 2;
    }

    return ret;
}

void solve(){
    ll ans = 1;
    ll len = min(n, m);
    for (ll i = 2 ; i <= len ; i++){
        if (prime[i]){
            for (ll j = i ; j <= len ; j *= i){
                ans = ans * power(i, (n/j) * (m/j)) % P;
            }
        }
    }
    cout << ans << '\n';
}

int main(){
    sieve();
    cin >> n >> m;
    solve();
    return 0;
}
