#include <iostream>
#include <map>
using namespace std;

typedef int64_t ll;

ll gcd(ll x, ll y) {
	return y ? gcd(y, x%y) : x;
}

ll lcm(ll x, ll y) {
	return x / gcd(x, y) * y;
}

ll is_prime(ll x) {
	if (x % 2 == 0)return 2;
	for (ll i = 3; i * i <= x; i += 2) {
		if (x % i == 0) return i;
	}
	return x;
}

// 0. read input
// 1. get gcd
// 2. get lcm, if lcm > gcd return 0
// 3. get prime factors
// 4. get answer

void solve() {
	ll d[50] = {};
	ll m[50] = {};
	int size_d, size_m;

	cin >> size_d >> size_m;
	for (int i = 0; i < size_d; i++) cin >> d[i];
	for (int i = 0; i < size_m; i++) cin >> m[i];

	ll lcm_d = d[0];
	ll gcd_m = m[0];

	for (int i = 1; i < size_m; i++) gcd_m = gcd(gcd_m, m[i]);

	for (int i = 1; i < size_d; i++) {
		lcm_d = lcm(lcm_d, d[i]);
		if (lcm_d > gcd_m) {
			cout << "0\n";
			return;
		}
	}
	if (gcd_m % lcm_d != 0) {
		cout << "0\n";
		return;
	}
	gcd_m = gcd_m / lcm_d;

	map<ll, int> mc;
	ll y = gcd_m;
	while (y > 1) {
		ll x = is_prime(y);
		mc[x] += 1;
		y /= x;
	}
	int answer = 1;
	for (map<ll, int>::iterator it = mc.begin(); it != mc.end(); it++) {
		answer *= (it->second+1);
	}
	cout << answer << '\n';
}

int main() {
	solve();
	return 0;
}