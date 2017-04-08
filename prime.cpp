#include <iostream>
using namespace std;
 
//31623
int p[31624];
int prime[3401];
 
void prec() {
    int i,j;
    
    for (i = 0; i < 31624; i++)
        p[i] = 1;
    p[1] = 0;
 
    for (i = 4; i < 31624; i += 2) {
        p[i] = 0;
    }
 
    for (i = 3; i < 31624; i += 2) {
        if (p[i] == 0)
            continue;
        for (j = i*i; j < 31624; j += i)
            p[j] = 0;
    }
 
    int cnt = 0;
    for (i = 2; i < 31624; i++)
        if (p[i] == 1){
            prime[cnt] = i;
            cnt++;
        }
}
 
bool check(int a) {
    int i;
    if (a == 1)
        return 0;
    for (i = 0; i < 3401 && prime[i] <= a; i++) {
        if (a == prime[i])
            return 1;
        if (a%prime[i] == 0)
            return 0;
    }
    return 1;
}
 
void proc() {
    int n, m, i;
    cin >> m >> n;
 
    for (i = m; i <= n; i++) {
        if (check(i))
            cout << i << '\n';
    }
}
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    prec();
    int t,tc;
    cin >> t;
    for (tc = 0; tc < t; tc++) {
        proc();
        cout << '\n';
    }
 
 
    return 0;
} 
