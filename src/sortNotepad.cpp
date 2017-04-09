#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int tmp;
    vector<int> v;
    while (in >> tmp) {
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    int len = v.size();
    for (int i = 0; i < len; i++) {
        out << v[i] << '\n';
    }
    return 0;
}