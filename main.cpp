#include <iostream>
#include "workshop.h"

int main() {
    double myDoubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int arraySize = sizeof(myDoubleArray) / sizeof(myDoubleArray[0]);

    // Print the array using printArray function
    std::cout << "Printing the array:" << std::endl;
    printArray(myDoubleArray, arraySize);

    // Find and print the maximum value using arrayMax function
    double max = arrayMax(myDoubleArray, arraySize);
    std::cout << "Maximum value in the array: " << max << std::endl;

    // Create a dynamic array and print its elements
    double* dynamicArr = dynamicArray(arraySize, 10.0);
    std::cout << "Dynamic array elements:" << std::endl;
    printArray(dynamicArr, arraySize);

    delete[] dynamicArr; // Deallocate the dynamic array

    return 0;
}
