#include <bits/stdc++.h>
using namespace std;

typedef int64_t ll;
typedef vector<vector<ll> > matrix;
const int len = 2;
const ll P = 1e9+7;
matrix operator * (const matrix &a, const matrix &b){
    size_t len = a.size();
    matrix ret(len, vector<ll>(len));
    for (size_t i = 0 ; i < len ; i++){
        for (size_t k = 0 ; k < len ; k++){
            for (size_t j = 0 ; j < len ; j++){
                ret[i][j] = (ret[i][j] + a[i][k] * b[k][j]) % P;
            }
        }
    }
    return ret;
}

ll fibo(int x){
    if (x <= 0) return 0;
    if (x <= 2) return 1;
    matrix ret = {{1,0},{0,1}};
    matrix a = {{1,1},{1, 0}};
    while(x){
        if (x % 2 == 1) ret = ret * a;
        a = a * a;
        x /= 2;
    }
    return ret[0][1];
}
