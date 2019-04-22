#include <bits/stdc++.h>
using namespace std;

typedef int64_t ll;
const ll p = 1e9 + 7;

ll power(ll a, ll n){
    if (n == 0) return 1;
    if (n == 1) return n;

    ll ret = 1;
    while(n){
        if (n % 2 == 1) ret = ret * a % p;
        a = a * a % p;
        n /= 2;
    }

    return ret;
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

int main(){
    int n, k;
    cin >> n >> k;
    cout << bino2(n, k) << '\n';
    return 0;
}