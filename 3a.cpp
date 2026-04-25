/* Name: Ivy Loi
Date: 4/24/2026
Homework 3, Problem 3a
CPSC 335 section 10
*/

#include <iostream>
#include <list>
#include <set>

std::list<int> LOrR(std::list<int> L, std::list<int> R) {
    std::set<int> visited;
    std::list<int> S;
// Iterate through list L and add elements that are not in R to S
    for (int i : L) {
// If the element i from L is not found in R and has not been added to S,
// add it to S
        if (visited.count(i) == 0) {
            S.push_back(i);
// Mark the element i as visited to avoid adding duplicates from R
            visited.insert(i);
        }
    }
// Iterate through list R and add elements that are not in L to S
    for (int i : R) {
// If the element i from R is not found in L and has not been added to S,
// add it to S
        if (visited.count(i) == 0) {
            S.push_back(i);
// Mark the element i as visited to avoid adding duplicates
            visited.insert(i);
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