#include <bits/stdc++.h>
using namespace std;

int n;
string s[20000];
int ans;

int main(){
	cin >> n;
	for (int i = 0 ; i < n ; i++){
		cin >> s[i];
	}
	for (int i = 0 ; i < n ; i++){
		for (int j = 0; j < n ; j++){
			if(i==j) continue;	
			if (s[i].find(s[j]) != string::npos)ans++;
		}
	}
	cout << ans << '\n';
    return 0;
}
