#include <iostream>
using namespace std;

/*
 * #1 
 *
 *
 *
 *
 *
 *
 *
 *
 */
template <typename T>
class Array{
private:
    T *arr;
    size_t size;
public:
    Array();
    bool push_back(T src);
    void display();
    T getSum();
    size_t getSize();
    double getAvg();
    Array operator+ (const Array<T> src);
    Array operator[] (const Array<T> src);
    Array operator= (const Array<T> src);

};

int main(){

    return 0;
}
