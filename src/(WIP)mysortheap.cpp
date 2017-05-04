// wip
#include <iostream>
using namespace std;

/*/
// Make heaptree;
// cmp�� �ݴ�� �־�� �Կ� ������ ��
template<class T, class Compare>
void MakeHeap(T first, T last, Compare cmp) {
    T t;                                                            // swap �� ����
    T::iterator it, parent, child;                                  // iterator ���� ��� ���� �ʿ�
    for (it = first; it != last; ++it) {                            //
        child = it;                                                 // ���̰� �ʱ�ȭ
        parent = (first + child - 1) / 2;                           // �θ� �ʱ�ȭ
        while (child == first || cmp(*parent, *child) == *child) {  //
            t = *parent;                                            // swap(parent, child)
            *parent = *child;                                       //
            *child = t;                                             //
            child = parent;                                         // ���̰� �缳��
            parent = (first + child) / 2;                           // �θ� �缳��
        }
    }
}

// HeapSort(a, a + n, cmp);
template<class T, class Compare>
void HeapSort(T first, T last, Compare cmp) {
    MakeHeap(first, last, cmp);
    T t;
    T::iterator it, parent, child;
    for (it = first; it != last; ++it) {
        child = it;
        parent = (first + child - 1) / 2;
        while (child == first || cmp(*parent, *child) == *parent) {
            t = *parent;
            *parent = *child;
            *child = t;
            child = parent;
            parent = (first + child) / 2;
        }
    }
}

// HeapSort(a, a + n);
// �⺻�� : �������� ����
template<class T>
void HeapSort(T first, T last) {
    HeapSort(first, last, less<>());
}
/*/
template<class T, class Compare>
void MakeHeap(int *a, int size, Compare cmp) {
    int child, parent, t;
    for (int i = 0; i < size; ++i) {
        child = i;
        parent = (0 + child - 1) / 2;
        while (child == 0 || cmp(a[parent], a[child]) == a[]) {
            int t = a[parent];
            a[parent] = a[child];
            a[child] = t;
            child = parent;
            parent = (0 + child - 1) / 2;
        }
    }
}

template<class Compare>
void HeapSort(int *a, int size, Compare cmp) {
    MakeHeap(a, size, cmp);
}

void HeapSort(int *a, int size) {
    HeapSort(a, size, less<>());
}
//*/
int main() {
    int a[10] = { 3, 1, 4, 5, 9, 2, 6, 8, 7, 0 };
    /*/
    HeapSort(a, a + 10);
    /*/
    HeapSort(a, 10);
    //*/
    for (int i = 0; i < 10; ++i) {
        cout << a[i] << ' ';
    }
    return 0;
}