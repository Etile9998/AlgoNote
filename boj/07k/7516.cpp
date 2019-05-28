#include <bits/stdc++.h>
using namespace std;

// 0. 1/x + 1/y = 1/n
// 1. (x+y)n = xy
// 2. if x=n+a, y=n+b
// n^2 = ab
// 3. n^2's |soinsu| = len
// 4. ret = (len+1) / 2

void solve(int tc){
    int n;
    cin >> n;
    int soinsu[300] = {};
    int len = 0;
    while(n % 2 == 0){
        soinsu[len]++;
        n /= 2;
    }
    if (soinsu[len])len++;
    for (int i = 3 ; i*i <= n ; i++){
        while(n % i == 0){
            soinsu[len]++;
            n /= i;
        }
        if (soinsu[len])len++;
    }
    if (n > 1){
        soinsu[len]++;
        len++;
    }

    int ret = 1;
    for (int i = 0 ; i < len ; i++){
        ret *= 2 * soinsu[i] + 1;
    }
    ret = (ret + 1) / 2;
    cout << "Scenario #"<< tc <<":\n" << ret << "\n\n";
}

int main(){
    int t;
    cin >> t;
    for (int i = 1 ; i <= t ; i++){
        solve(i);
    }
    return 0;
}