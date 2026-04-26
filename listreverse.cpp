
/* Name: Ivy Loi
Date: 4/24/2026
Homework 3, Problem 1a
CPSC 335 section 10
*/

#include <iostream>
#include <list>

std::list<int> reverse_list(const std::list<int>& lst) {
   std::list<int> reversed;
   std::list<int> temp = lst; // Create a copy of the original list to iterate through
   while(!temp.empty()) {
        auto last_element = temp.begin(); // Get the first element of the temp list (which is the last element of the original list)
        for (auto it = temp.begin(); it != temp.end(); ++it) {
            last_element = it; // Update last_element to the current element in the iteration
        }
        reversed.push_back(*last_element); // Add the last element to the reversed list
        temp.erase(last_element); // Remove the last element from the temp list
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
    std::cout << std::endl << "Reversed list: ";
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
    std::cout << std::endl << "Reversed list: ";
    for (const auto& l : reversed_list2) {
        std::cout << l << " ";
    }
    std::cout << std::endl;

    return 0;
}