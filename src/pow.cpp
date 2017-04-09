template <typename T>
// 0 < n
T pow(T a, int n) {
    if (n == 1)
        return a;
    T tmp = pow(a, n / 2);
    if (n % 2)
        return tmp*tmp*a;
    else
        return tmp*tmp;
}
