#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> a[500001];

char buf[1 << 20];
int p, len;
inline int readChar() {
    if (p == len) {
        len = fread(buf, 1, sizeof buf, stdin);
        if (!len)return EOF;
        p = 0;
    }
    return buf[p++];
}
inline int readInt() {
    int ch;
    while (ch = readChar(), ch != '-' && (ch<'0' || ch>'9'));
    int sign, res;
    if (ch == '-')sign = -1, res = 0;
    else sign = 1, res = ch - '0';
    while (ch = readChar(), ch >= '0'&&ch <= '9')
        res = res * 10 + ch - '0';
    return sign * res;
}

// ====================================================================== // 
// radix sort for signed int
class radix_test
{
    const int bit; 
    public:
    radix_test(int offset) : bit(offset) {} 

    bool operator()(pair<int, int> value) const 
    {
        if (bit == 31) 
            return value.first< 0; 
        else
            return !(value.first& ( 0xff << bit)); 
    }
};

void radixSort(pair<int, int> *first, pair<int, int> *last, int msb = 31){
    if (first != last && msb >= 0)
    {
        pair<int, int> *mid = std::partition(first, last, radix_test(msb));
        msb-=4; 
        radixSort(first, mid, msb); 
        radixSort(mid, last, msb);
    }
}

// ====================================================================== // 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    int n;
    n = readInt();
    for (int i = 0 ; i < n ; i++){
        a[i].second = i;
        a[i].first = readInt();
    }

    radixSort(a, a + n);

    for (int i = 0 ; i < n ; i++){
        ans = max(ans, a[i].second - i);
    }

    cout << ans << '\n';
    return 0;
}
