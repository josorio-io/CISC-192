#include <iostream>
#include <cmath>

int roundToInteger(double);
double roundToTenth(double);
double roundToHundredth(double);
double roundToThousandth(double);

int main() {
    double number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Original number: " << number << std::endl;
    std::cout << "Rounded to the nearest integer: " << roundToInteger(number) << std::endl;
    std::cout << "Rounded to the nearest tenth: " << roundToTenth(number) << std::endl;
    std::cout << "Rounded to the nearest hundredth: " << roundToHundredth(number) << std::endl;
    std::cout << "Rounded to the nearest thousandth: " << roundToThousandth(number) << std::endl;

    return 0;
}

int roundToInteger(double number) {
    return (floor(number + 0.5));
}

double roundToTenths(double number) {
    return floor(number * 10 + 0.5) / 10;
}

double roundToHundredtsh(double number) {
    return floor(number * 100 + 0.5) / 100;
}

double roundToThousandths(double number) {
    return floor(number * 1000 + 0.5) / 1000;
}

/*
Output

Enter a number: 10.1245
Original number: 10.1245
Rounded to the nearest integer: 10
Rounded to the nearest tenth: 10.1
Rounded to the nearest hundredth: 10.12
Rounded to the nearest thousandth: 10.125

*/
