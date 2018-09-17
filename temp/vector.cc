#include <iostream>
#include <vector>

int main(){
    // ==========================================
    // vector는 길이를 변경할 수 있는 벡터이다
    std::vector<int> vector1; // []
    std::vector<int> vector2(4); // [0 0 0 0]
    std::vector<int> vector3(4, 3); // [3 3 3 3]
    std::vector<int> vector4 = {1, 2, 3, 4}; // [1 2 3 4] 

    // ==========================================
    // 2차원 벡터
    int row = 2;
    int col = 3;
    std::vector<std::vector<int> > vector5(row, std::vector<int>(col));
    // [[0 0 0],
    // [0 0 0]]
    
    // ==========================================
    std::vector<int> a = {1, 2, 3, 4};
    a.push_back(5); // [1 2 3 4 5]
    a.push_back(6); // [1 2 3 4 5 6]

    a.resize(4); // [1 2 3 4]

    a.pop_back(); // [1 2 3]
    a.pop_back(); // [1 2]
    
    a.clear(); // []
    a.resize(4); // [0 0 0 0]
    
    // ==========================================
    std::vector<int> b = {1, 2, 3, 4};
    for (size_t i = 0 ; i < b.size() ; i++){
        std::cout << b[i] << ' '; // 1 2 3 4
    }
    std::cout << std::endl;

    std::cout << b.empty() << std::endl; // 0
    b.clear();
    std::cout << b.empty() << std::endl; // 1
    b.push_back(1);
    b.push_back(2);
    b.emplace_back(3);
    for (auto &x : b){
        std::cout << x << ' '; // 1 2 3
    }
    std::cout << std::endl;

    return 0;
}
