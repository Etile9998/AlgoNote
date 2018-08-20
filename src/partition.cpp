#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;

void display(vi &a) {
    int idx = 0;
    int len = a.size();
    while (idx < len && a[idx])
        cout << a[idx++] << ' ';
    cout << '\n';
}
void proc(int n) {
    vi a(n);
    int k = 0; // 1이 아닌 첫 인덱스 값 a[] = {5 4 3 2 1 1 1 1} 경우는 3
    a[k] = n;

    while (1) {
        // output
        display(a);

        // set position
        int pos = 0;
        while (k >= 0 && a[k] == 1) {
            pos++;
            k--;
        }

        // exit
        if (k < 0) 
            return;

        // set position 2
        a[k]--;
        pos++;

        while (pos > a[k]) {
            a[k + 1] = a[k];
            pos = pos - a[k];
            k++;
        }

        a[k + 1] = pos;
        k++;
    }
}

int main() {
    int n;
    cin >> n;
    proc(n);
    return 0;
}
