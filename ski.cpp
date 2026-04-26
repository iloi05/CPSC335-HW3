/* Name: Ivy Loi
Date: 4/24/2026
Homework 3, Problem 1a
CPSC 335 section 10
*/
#include <iostream>

bool skiCost(int days, int skiRental, int skiPurchase) {
    // Calculate the total cost of renting skis for the given number of days
    int totalRentalCost = 0;
    for (int i = 0; i < days; i++) {
        totalRentalCost += skiRental;
    }
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
    int rentCost = days * skiRental;

    std::cout << "Cost of renting skis is $" << skiRental << std::endl;
    std::cout << "Cost of purchasing skis: $" << skiPurchase << std::endl;
    std::cout << "You are planning to go skiing for " << days << " days." << std::endl;
    if (skiCost(days, skiRental, skiPurchase)) {
        std::cout << "It is cheaper to rent skis for " << days << " days"
                  << " for $" << rentCost << std::endl;
    } else {
        std::cout << "It is cheaper to purchase skis for $" << skiPurchase << "." << std::endl;
    }

    return 0;
}