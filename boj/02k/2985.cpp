#include <iostream>
using namespace std;

int a, b, c;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> a >> b >> c;
    if (a + b == c){
        cout << a << '+' << b << '=' << c << '\n';
        return 0;
    }
    if (a - b == c){
        cout << a << '-' << b << '=' << c << '\n';
        return 0;
    }
    if (a * b == c){
        cout << a << '*' << b << '=' << c << '\n';
        return 0;
    }
    if ((double)a / b == c){
        cout << a << '/' << b << '=' << c << '\n';
        return 0;
    }
    if (a == b + c){
        cout << a << '=' << b << '+' << c << '\n';
        return 0;
    }
    if (a == b - c){
        cout << a << '=' << b << '-' << c << '\n';
        return 0;
    }
    if (a == b * c){
        cout << a << '=' << b << '*' << c << '\n';
        return 0;
    }
    if (a == (double)b / c){
        cout << a << '=' << b << '/' << c << '\n';
        return 0;
    }

    return 0;
}
