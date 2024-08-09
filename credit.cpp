#include <iostream>

int main() {
    int accountNumber;
    double beginningBalance;
    double totalCharges;
    double totalCredits;
    double creditLimit;

    int next = 0;

    while(!(next == -1)) {

        std::cout << "Enter account number: ";
            std::cin >> accountNumber;
        std::cout << "Enter beginning balance: ";
            std::cin >> beginningBalance;
        std::cout << "Enter total charges: ";
            std::cin >> totalCharges;
        std::cout << "Enter total credits: ";
            std::cin >> totalCredits;
        std::cout << "Enter credit limit: ";
            std::cin >> creditLimit;

        double newBalance = beginningBalance + totalCharges - totalCredits;

        std::cout << "Account: " << accountNumber << std::endl;
        std::cout << "Credit limit: " << creditLimit << std::endl;
        std::cout << "Balance: " << newBalance << std::endl;

        if(newBalance > creditLimit) {
            std::cout << "Credit limit exceeded." << std::endl;
        }

        std::cout << "Enter -1 to exit, or any other number to continue: ";
            std::cin >> next;

    }
    return 0;
}
