typedef int64_t ll;

const ll MAXN = 4000003;
const ll MOD = 1e9 + 7;

ll fac[MAXN];
ll inv[MAXN];

ll power(ll a, ll n, ll p){
    if (n == 0) return 1;
    ll ret = power(a * a % p, n/2, p);
    if (n % 2)
        ret = ret * a % p;
    return ret;
}
void prec(){
    fac[0] = 1;
    for (int i = 1; i < MAXN; i++)
        fac[i] = (fac[i-1] * i) % MOD;
    inv[MAXN - 1] = power(fac[MAXN - 1], MOD - 2, MOD);
    for (int i = MAXN - 1; i > 0 ; i--)
        inv[i - 1] = (inv[i] * i) % MOD;
}

ll bino(int n, int k){
    return fac[n] * inv[k] % MOD * inv[n-k] % MOD;
}
