/* Name: Ivy Loi
Date: 4/24/2026
Homework 3, Problem 1a
CPSC 335 section 10
*/
#include <iostream>

bool skiCost(int days, int skiRental, int skiPurchase) {
    // Calculate the total cost of renting skis for the given number of days
    int totalRentalCost = days * skiRental;
    // Compare the total rental cost with the purchase cost
    if (totalRentalCost < skiPurchase) {
        // If renting is cheaper, return true
        return true;
    } else {
        return false;
    }
}

int main() {
    int days = 5;
    int skiRental = 100;
    int skiPurchase = 250;

    if (skiCost(days, skiRental, skiPurchase)) {
        std::cout << "It is cheaper to rent skis." << std::endl;
    } else {
        std::cout << "It is cheaper to purchase skis." << std::endl;
    }

    return 0;
}