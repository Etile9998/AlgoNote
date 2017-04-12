// 조세퍼스 최후의 생존자
#include <iostream>
using namespace std;

int josephus(int n, int k) {
    if (n == 1)
        return 1;
    return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m;
    cin >> n >> m;
    cout << josephus(n, m);
    return 0;
}
