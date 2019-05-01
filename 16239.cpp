#include <bits/stdc++.h>
using namespace std;

int main(){
	int k, n;
	cin >> k >> n;
	int a[100] = { 0 };
	for (int i = 0 ; i < n - 1; i++){
		a[i] = i + 1;
	}
	a[n-1] = k - (n) * (n-1) / 2;
	for (int i = 0 ; i < n ; i++){
		cout << a[i] << '\n';
	}
    return 0;
}
