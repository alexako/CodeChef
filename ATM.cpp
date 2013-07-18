#include <iostream>
#include <iomanip>


int main() {

    int withdraw;
    double balance;

    // Enter withdrawal amount and balance
    std::cin >> withdraw >> balance;

    // Withdrawal amount must be a multiple of 5 and be less than balance
    if (withdraw % 5 == 0 && withdraw <= balance - 0.50) {
        balance = balance - withdraw - 0.50;
        std::cout << std::setprecision(2) << std::fixed << balance << std::endl;
    }
    else
        std::cout << std::setprecision(2) << std::fixed << balance << std::endl;

    return 0;
}
