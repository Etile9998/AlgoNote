// ====================================================================== // 
// radix sort for signed int
class radix_test
{
    const int bit; 
    public:
    radix_test(int offset) : bit(offset) {} 

    bool operator()(int value) const 
    {
        if (bit == 31) 
            return value < 0; 
        else
            return !(value & (1 << bit)); 
    }
};

void radixSort(int *first, int *last, int msb = 31){
    if (first != last && msb >= 0)
    {
        int *mid = std::partition(first, last, radix_test(msb));
        msb--; 
        radixSort(first, mid, msb); 
        radixSort(mid, last, msb);
    }
}

// ====================================================================== // 
