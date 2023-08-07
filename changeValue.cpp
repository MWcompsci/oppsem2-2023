#include <iostream>

void changeValue(double* ptr) {
    *ptr = 42.0;
}

int main() {
    double myDouble = 3.14;
    char myChar = 'A';

    double* doublePtr = &myDouble;
    char* charPtr = &myChar;

    std::cout << "Value of myDouble: " << *doublePtr << std::endl;
    std::cout << "Value of myChar: " << *charPtr << std::endl;

    changeValue(doublePtr);

    std::cout << "New value of myDouble: " << *doublePtr << std::endl;

    return 0;
}
