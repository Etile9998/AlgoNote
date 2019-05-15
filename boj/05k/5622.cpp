#include <iostream>
#include <string>
using namespace std;

int a[26] = {
    3,3,3,4,4,4,
    5,5,5,6,6,6,
    7,7,7,8,8,8,8,
    9,9,9,10,10,10,10
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    
    int ans = 0;
    for (size_t i = 0 ; i < s.length() ; i++)
        ans += a[s[i] - 'A'];
    cout << ans << '\n';
    return 0;
}
