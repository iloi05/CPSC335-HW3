#include <iostream>

bool skiCost(int days, int skiRental, int skiPurchase) {
    int totalRentalCost = days * skiRental;
    if (totalRentalCost < skiPurchase) {
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