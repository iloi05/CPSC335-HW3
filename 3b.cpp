/* Name: Ivy Loi
Date: 4/24/2026
Homework 3, Problem 3b
CPSC 335 section 10
*/
#include <iostream>
#include <list>
#include <algorithm>
std::list<int> LOrR(std::list<int> L, std::list<int> R) {
    std::list<int> S;
// Iterate through list L and add elements that are not in R to S
    for (int i : L) {
        if (std::find(R.begin(), R.end(), i) == R.end()) {
// If the element i from L is not found in R, add it to S
            S.push_back(i);
        }
    }
// Iterate through list R and add elements that are not in L to S
    for (int i : R) {
        if (std::find(L.begin(), L.end(), i) == L.end()) {
// If the element i from R is not found in L, add it to S
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