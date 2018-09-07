#include <iostream>
using namespace std;

template <typename T>
class Stack{
private:
    T *a;
    size_t _size;
public:
    Stack();
    size_t size();
    bool empty();
    T top();
    void push();
    void pop();
};

template <typename T>
Stack<T>::Stack(){
    
}

template <typename T>
size_t Stack<T>::size(){
    return size;
}

template <typename T>
bool Stack<T>::empty(){
    return size == 0;
}

template <typename T>
T Stack<T>::top(){
    
}

template <typename T>
void Stack<T>::push(){

}

template <typename T>
void Stack<T>::pop(){
    if (empty()) {
        return;
    }
    
}

int main(){

    return 0;
}
