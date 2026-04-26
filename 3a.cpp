/* Name: Ivy Loi
Date: 4/24/2026
Homework 3, Problem 3a
CPSC 335 section 10
*/

#include <iostream>
#include <list>
#include <unordered_set>

std::list<int> LOrR(const std::list<int>& L, const std::list<int>& R) {
    std::unordered_set<int> visited;
    std::list<int> S;

    for(int l : L) {
        if (visited.find(l) == visited.end()) {
            S.push_back(l);
            visited.insert(l);
        }
    }
    for(int r : R) {
        if (visited.find(r) == visited.end()) {
            S.push_back(r);
            visited.insert(r);
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