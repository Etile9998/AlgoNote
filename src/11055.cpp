#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000];
int d[1001];
int ans;

int main(){
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    ans = d[0] = a[0];
    for (int i = 1 ; i < n ; i++){
        d[i] = a[i];
        for (int j = 0 ; j <= i ; j++){
            if (a[j] < a[i] && d[i] < d[j] + a[i]){
                d[i] = d[j] + a[i];
                if (ans < d[i])
                    ans = d[i];
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
