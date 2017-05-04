#include <iostream>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;++i)
int t, n;
int a[100];

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        rep(i, 0, n)
            cin >> a[i];
    }
    return 0;
}