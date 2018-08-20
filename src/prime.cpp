int isPrime(int x){
    if (x < 2) return 0;
    if (x < 4) return 1;
    if (x % 2 == 0) return 0;
    for (unsigned int i = 3; i * i <= x ; i++)
        if (x % i == 0) return 0;
    return 1;
}
