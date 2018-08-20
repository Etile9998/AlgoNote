/*
fast fibonacci
f(0) = 0
f(1) = 1
f(n) = f(n-1) + f(n-2)
*/
typedef long long ll;
#define rep(i,a,b) for(int i = a; i < b; ++i)
#define mod 1000000007
typedef vector<vector<ll>> matrix;

matrix operator*(const matrix &a, const matrix &b) {
    int ni = a.size();      // a의 행
    int nj = b[0].size();   // b의 열
    int nk = a[0].size();   // a의 열 || b의 행
    matrix c(ni, vector<ll>(nj));
    rep(i, 0, ni) {
        rep(j, 0, nj) {
            rep(k, 0, nk) {
                c[i][j] += a[i][k] * b[k][j];
            }
            c[i][j] %= mod;
        }
    }
    return c;
}

matrix pow(matrix a, ll n) {
    if (n == 0) {
        return matrix{ {1,0},{0,1} };
    }

    matrix t = pow(a, n / 2);
    if (n % 2)
        return t*t*a;
    else
        return t*t;
}

int main() {
    matrix a = { {1,1},{1,0} };
    int n;
    cin >> n;
    /*
    F(0) = 0
    F(1) = 1
    F(N) = F(N-1) + F(N-2)
    */
    if (n < 1)
        cout << 0 << '\n';
    else
        cout << pow(a, n - 1)[0][0] << '\n';
}
