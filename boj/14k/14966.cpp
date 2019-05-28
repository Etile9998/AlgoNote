#include <bits/stdc++.h>
using namespace std;

int m, n;

struct {
	int r, k, i;
}a[500000];

void solve(){

}

int main(){
	cin >> m >> n;
	for (int i = 0 ; i < n ; i++){
		cin >> a[i].k >> a[i].i;
		a[i].r = i +1;
	}
	solve();
    return 0;
}
