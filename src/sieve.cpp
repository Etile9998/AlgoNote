#include <cstring>

const int MAXN = 1000005;

bool prime[MAXN];

void sieve(){
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;
    for (int i = 2 ; i < MAXN ; i+= 2)
        prime[i] = 0;
    for (int i = 3 ; i * i <= MAXN ; i+=2){
        if(prime[i]){
            for (int j = i*i ; j <= MAXN ; j+=i){
                prime[j] = 0;
            }
        }
    }
}
