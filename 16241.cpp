#include <bits/stdc++.h>
using namespace std;

int n, m;
int l[100001];
int r[100001];
int ans = 1e9 + 7;
int x;

int main(){
	cin >> n >> m;
	for (int i = 0 ; i < n ; i++ ) cin >> l[i];
	for (int i = 0 ; i < m ; i++ ) cin >> r[i];
	sort(l, l+n);
	sort(r, r+m);
	if (n < m){
	}
    return 0;
}
