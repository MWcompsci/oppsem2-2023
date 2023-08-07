#include <iostream>
#include "workshop.h"

// Function implementation for printArray
void printArray(double* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i << ": " << arr[i] << std::endl;
    }
}
