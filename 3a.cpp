#include <iostream>
#include <list>
#include <set>

std::list<int> LOrR(std::list<int> L, std::list<int> R) {
    std::set<int> visited;
    std::list<int> S;
    for (int i : L) {
        if (visited.count(i) == 0) {
            S.push_back(i);
            visited.insert(i);
        }
    }
    for (int i : R) {
        if (visited.count(i) == 0) {
            S.push_back(i);
            visited.insert(i);
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