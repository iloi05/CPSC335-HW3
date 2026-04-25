
/* Name: Ivy Loi
Date: 4/24/2026
Homework 3, Problem 1a
CPSC 335 section 10
*/

#include <iostream>
#include <list>

std::list<int> reverse_list(const std::list<int>& lst) {
   std::list<int> reversed;
   // Iterate through the original list
   //and insert each element at the beginning of the reversed list
   for (const auto& l : lst) {
    // Insert the current element at the beginning of the reversed list
        reversed.insert(reversed.begin(), l);
   }
   return reversed;
}

int main() {
    std::list<int> lst = {1, 2, 3, 4, 5};
    std::list<int> reversed_lst = reverse_list(lst);

    std::cout << "Original list: ";
    for (const auto& l : lst) {
        std::cout << l << " ";
    }
    std::cout << "\nReversed list: ";
    for (const auto& l : reversed_lst) {
        std::cout << l << " ";
    }
    std::cout << std::endl;

    std::list<int> list2 = {10, 20, 30};
    std::list<int> reversed_list2 = reverse_list(list2);
    std::cout << "Original list: ";
    for (const auto& l : list2) {
        std::cout << l << " ";
    }
    std::cout << "\nReversed list: ";
    for (const auto& l : reversed_list2) {
        std::cout << l << " ";
    }
    std::cout << std::endl;

    return 0;
}