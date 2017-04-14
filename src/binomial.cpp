#include <iostream>
#include <cstdio>
using namespace std;

typedef long long ll;
#define mod 1000000007
ll C[1001][1001];

void prec() {
    int i, j;
    for (i = 0; i <= 1000; i++)
    {
        for (j = 0; j <= i; j++)
        {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;

            // Calculate value using previosly stored values
            else
                C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % mod;
        }
    }
}

int main() {
    prec();
    int n, k;
    cin >> n >> k;
    cout << C[n][k] << '\n';
    return 0;
}
