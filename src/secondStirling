// 제 2 종 스털링 수
int proc(int n, int k){
    if(n==0 || k == 0 || n<k)
        return 0;
    if(k==1 || k==n)
        return 1;
    return proc(n-1,k-1) + k*proc(n-1,k);
}
