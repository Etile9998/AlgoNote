#include <iostream>
#include <random>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());

    int loop = 5;
    int cnt;
    int x;
    int64_t check; // 64비트 (45 까지 담을 수 있음)

    while (loop--){
        cnt = check = 0;
        
        while(cnt < 6) { // 6 개 비트를 채웠을 때 탈출
            x = gen() % 45; 
            if (check & 1LL << x) continue; // x 번째 비트가 0 인지 확인
            check |= 1LL << x; // x 번째 비트를 1로 변환
            cnt++; // 개수 증가
        }

        for (int i = 0 ; i < 45 ; i++){ // 오름차순 출력
            if (check & 1LL << i){
                cout << i+1 << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}
