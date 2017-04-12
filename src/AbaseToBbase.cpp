#include <iostream>
#include <string>
using namespace std;

string num = "0123456789ABCDEF";

int val(char c) {
    if ('0' <= c && c <= '9')
        return c - '0';
    else if ('A' <= c && c <= 'F')
        return c - 'A' + 10;
    else // c == 'a' ~ 'f'
        return c - 'a' + 10;
}

int toDecimal(string a, int base) {
    int pow = 1;
    int ret = 0;
    int len = a.size();
    for (int i = len - 1; i >= 0; i--) {
        ret += val(a[i]) * pow;
        pow *= base;
    }
    return ret;
}

string toBase(int a, int base) {
    int pos = -1;
    char ret[100] = "";

    while (a) {
        ret[++pos] = num[a % base];
        a /= base;
    }

    int len = strlen(ret);
    char t;
    for (int i = 0; i < len / 2; i++) {
        t = ret[i];
        ret[i] = ret[len - i - 1];
        ret[len - i - 1] = t;
    }

    return ret;
}

string AtoB(string a, int bBase, int aBase = 10) {
    return toBase(toDecimal(a, aBase), bBase);
}

int main() {
    cout << AtoB("100", 2);
    return 0;
}
