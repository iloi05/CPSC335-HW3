#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sorting(std::vector<int> list) {
    int spots = list.size();

    bool nonDec = true;
    bool nonInc = true;

    for (int i = 0; i < spots - 1; i++) {
        if (list[i] < list[i + 1]) {
            nonInc = false;
        }
        if (list[i] > list[i + 1]) {
            nonDec = false;
        }
    }

    if (nonDec) {
        return list;
    } 
    else if (nonInc) 
    {
        std::reverse(list.begin(), list.end());
        return list;
    }

    for (int i = 0; i < spots; i++) {
        for (int j = 0; j < spots - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                std::swap(list[j], list[j + 1]);
            }
        }
    }
    return list;
}

int main() {
    std::vector<int> list = {1, 2, 3, 4, 5};
    std::vector<int> sortedList = sorting(list);

    for (int num : sortedList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::vector<int> list2 = {5, 4, 3, 2, 1};
    std::vector<int> sortedList2 = sorting(list2);
    for (int num : sortedList2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::vector<int> list3 = {3, 1, 4, 2, 5};
    std::vector<int> sortedList3 = sorting(list3);
    for (int num : sortedList3) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}   