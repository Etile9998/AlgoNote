#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
#define X first
#define Y second
#define all(x) x.begin(), x.end()
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<double, int> pdi;

const int MAX = 50'0005;

int main()
{
	int n;
	scanf("%d", &n);

	int arr[MAX], tmp[MAX];
	for (int i = 0; i < n; ++i) scanf("%d", arr + i);

	memcpy(tmp, arr, sizeof(arr));
	sort(tmp, tmp + n);

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int pos = lower_bound(tmp, tmp + n, arr[i]) - tmp;

		if (i < pos) continue;
		ans = max(ans, i - pos);
	}

	printf("%d", ans);

	return 0;
}
