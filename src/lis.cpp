#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;

int lis(int a[], int n) {
    int i, j, max=0;
    vi d(n, 1);

    for (i = 0; i < n; i++)
        for (j = 0; j < i; j++) {
            if (a[j] < a[i] && d[i] < d[j] + 1)
                d[i] = d[j] + 1;
        }

    for (i = 0; i < n; i++)
        if (max < d[i])
            max = d[i];

    return max;
}