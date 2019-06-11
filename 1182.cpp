#include <bits/stdc++.h>
using namespace std;

int n;
int s;
int bits;
int a[20];
int len;
int ans;

int main(){
    cin >> n >> s;
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];                 
    }
    len = (1 << n);
    for (int i = 1 ; i < len ; ++i){
        int tmp = 0;
        for (int j = 0 ; j < n ; j++){
            if ((1 << j) & i){
                tmp += a[j];
            }
        }
        if (tmp == s) ans += 1;
    }
    cout << ans << '\n';
    return 0;
}
