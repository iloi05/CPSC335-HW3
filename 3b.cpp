#include <iostream>
#include <list>
#include <algorithm>
std::list<int> LOrR(std::list<int> L, std::list<int> R) {
    std::list<int> S;
    for (int i : L) {
        if (std::find(R.begin(), R.end(), i) == R.end()) {
            S.push_back(i);
        }
    }
    for (int i : R) {
        if (std::find(L.begin(), L.end(), i) == L.end()) {
            S.push_back(i);
        }
    }
    return S;

}

int main() {
    std::list<int> L = {1, 2, 3, 4, 5};
    std::list<int> R = {4, 5, 6, 7, 8};
    std::list<int> S = LOrR(L, R);
    for (int i : S) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}