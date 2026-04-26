/* Name: Ivy Loi
Date: 4/24/2026
Homework 3, Problem 3b
CPSC 335 section 10
*/
#include <iostream>
#include <list>
#include <unordered_set>

std::list<int> setDifference(const std::list<int>& L, const std::list<int>& R) {
    // Hash the elements of R for lookup
    std::unordered_set<int> hashR(R.begin(), R.end());
    std::list<int> difference;
    // Add elements from L that are not in R
    for (int l : L) {
    // if l is not in R, add to difference
        if (hashR.find(l) == hashR.end()) {
            difference.push_back(l);
        }
    }
    return difference;
}

int main() {
    std::list<int> L = {1, 2, 3, 4, 5};
    std::list<int> R = {4, 5, 6, 7, 8};
    std::list<int> S = setDifference(L, R);
    for (int i : S) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}