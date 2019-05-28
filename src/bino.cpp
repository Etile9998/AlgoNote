typedef int64_t ll;

const ll MAXN = 4000003;
const ll p = 1e9 + 7;

ll fac[MAXN];
ll inv[MAXN];

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

void prec(){
    fac[0] = 1;
    for (int i = 1; i < MAXN; i++)
        fac[i] = (fac[i-1] * i) % p;
    inv[MAXN - 1] = power(fac[MAXN - 1], p - 2);
    for (int i = MAXN - 1; i > 0 ; i--)
        inv[i - 1] = (inv[i] * i) % p;
}

ll bino(int n, int k){
    return fac[n] * inv[k] % p * inv[n-k] % p;
}

// no prec ver
ll bino2(int n, int k){
    k = min(k, n-k);

    ll son = 1;
    ll mom = 1;

    for (int i = 0 ; i < k ; i++){
        son = son * (n-i) % p;
        mom = mom * (k-i) % p;
    }
    return son * power(mom, p-2) % p;
}
