#include <iostream>
using namespace std;

const int d[2][4] = { { 0,1,0,-1 },{ 1,0,-1,0 } };

int A[100][100];
int n, m;

void snail() {
    int r, c;
    int i = 1;
    int dir;
    r = c = dir = 0;

    while (i <= n*m) {
        A[r][c] = i++;
        int tmp_r = r + d[0][dir];
        int tmp_c = c + d[1][dir];
        if (0 > tmp_r || tmp_r >= n || 0 > tmp_c || tmp_c >= m || A[tmp_r][tmp_c])
            dir = (dir + 1) % 4;
        r += d[0][dir];
        c += d[1][dir];
    }
}
int main() {
    // your code goes here
    n = 5; m = 5;
    snail();
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++)
            cout << A[r][c] << ' ';
        cout << '\n';
    }
    return 0;
}