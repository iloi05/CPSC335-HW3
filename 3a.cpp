/* Name: Ivy Loi
Date: 4/24/2026
Homework 3, Problem 3a
CPSC 335 section 10
*/

#include <iostream>
#include <list>
#include <set>

bool has(const std::list<int>& lst, int value) {
    for (int i : lst) {
        if (i == value) {
            return true;
        }
    }
    return false;
}

std::list<int> LOrR(std::list<int> L, std::list<int> R) {
    std::list<int> S;
// Iterate through list L and add elements that are not in R to S
    for (int i : L) {
// If the element i from L is not found in R and has not been added to S,
// add it to S
        if (!has(R, i)) {
            S.push_back(i);
        }
    }
// Iterate through list R and add elements that are not in L to S
    for (int i : R) {
// If the element i from R is not found in L and has not been added to S,
// add it to S
        if (!has(L, i)) {
            S.push_back(i);
        }
    }
// Return the list S containing elements that are in L or R but not in both
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