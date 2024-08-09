#include <iostream>

int main() {
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < i + 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for(int i = 11; i > 0; i--) {
        for(int j = 0; j < i - 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for(int i = 10; i > 0; i--) {
        for(int j = 0; j < 10 - i; j++) {
            std::cout << " ";
        }
        for(int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for(int i = 0; i < 10; i++) {
        for(int j = 1; j < 10 - i; j++) {
            std::cout << " ";
        }
        for(int j = 0; j < i + 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }


    return 0;
}