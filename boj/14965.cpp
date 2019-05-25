#include <bits/stdc++.h>
using namespace std;

int n;
string a[20000];
int ans;

unordered_set<string> s;
unordered_map<string, int> cnt;

int main(){
	cin >> n;
	for (int i = 0 ; i < n ; i++){
		cin >> a[i];
        s.clear();
        for (size_t j = 0 ; j < a[i].size() ; j++){
            string tmp;
            for (size_t k = j ; k < a[i].size() ; k++){
                tmp += a[i][k];
                s.insert(tmp);
            }
        }
        for (auto &x : s)
            cnt[x]++;
    }

    for (auto &x : a)
        ans += cnt[x];
	cout << ans - n << '\n';
    return 0;
}
