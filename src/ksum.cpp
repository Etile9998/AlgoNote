// ∑ k
int k1sum(int k){
    return k*(k+1)/2;
}

// ∑ k^2
int k2sum(int k){
    return k * (k+1) * (2*k + 1) / 6;
}

// ∑ k^3
int k3sum(int k){
    int ret = k1sum(k);
    return ret * ret;
}