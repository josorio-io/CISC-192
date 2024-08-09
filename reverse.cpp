#include <iostream>

int reverseDigits(int number);

int main() {
    int number;
    std::cout << "Enter a number: ";
      qstd::cin >> number;
    std::cout << "The number with its digits reversed is: " << reverseDigits(number) << std::endl;
    return 0;
}

int reverseDigits(int number) {
    int reversedNumber = 0;
    while (number > 0) {
        reversedNumber = (reversedNumber * 10) + (number % 10);
        number /= 10;
    }
    return reversedNumber;
}

/*
Output

Enter a number: 7631
The number with its digits reversed is: 1367
*/
