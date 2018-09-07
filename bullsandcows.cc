#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

// return 10 * strike + ball;
// 30 == HOMERUN
int calc(const int x, const int y){
    int ret = 0;

    for (int i = 1 ; i <= 100 ; i*=10){
        for (int j = 1 ; j <= 100 ; j*=10){
            if (x % (i * 10) / i == y % (j * 10) / j){
                if (i == j) ret += 10;
                else ret += 1;
            }
        }
    }

    return ret;
}

void game(){
    random_device rd;
    mt19937 gen(rd());

    int answer;
    int input;
    int a[10] = {0};

    for (int i = 0 ; i < 10 ; i++){
        a[i] = i;
    }

    shuffle(a, a + 10, gen);
    answer = 100 * a[0] + 10 * a[1] + a[2];

    do{
        cout << "input number : ";
        cin >> input;
        int cnt = calc(answer, input);

        if (cnt == 30){
            cout << "Home Run!\n";
        }
        else {
            cout << cnt / 10 << "Strike\n";
            cout << cnt % 10 << "Ball\n";
        }

    } while(answer != input);
}

int main(){
    game();

    return 0;
}
