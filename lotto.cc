#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());

    int loop = 5;
    int lotto[45];

    for (int i = 0 ; i < 45 ; i++){
        lotto[i] = i + 1;
    }

    while (loop--){
        shuffle(lotto, lotto + 45, gen);
        sort(lotto, lotto + 6);
        for (int i = 0 ; i < 6 ; i++){
            cout << lotto[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
