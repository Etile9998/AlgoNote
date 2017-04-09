/*
 Generating Integer Partition (C recursive)
*/

#include <stdio.h>

#define MAXN 100
int a[MAXN];

/*
rem : 분할가능한 남은 수
fir : 분할부분 첫 수
len : 배열 길이
*/
void proc(int rem, int fir, int len) {
    int i;
    // output
    if (!rem) {
        for (i = 0; i < len; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
        return;
    }

    for (i = fir; i > 0; i--) {
        if (i > rem) // 남은 수보다 커질 수 없으므로
            continue;
        a[len] = i;
        proc(rem - i, i, len + 1);
    }
}

int main() {
    int n;
    printf("input number: ");
    scanf("%d", &n);
    proc(n, n, 0);
}