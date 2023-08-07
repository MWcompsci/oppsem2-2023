#include <iostream>

void printArray(double* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i << ": " << arr[i] << std::endl;
    }
}

int main() {
    double myDoubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int arraySize = sizeof(myDoubleArray) / sizeof(myDoubleArray[0]);

    printArray(myDoubleArray, arraySize);

    return 0;
}
