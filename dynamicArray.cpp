#include <iostream>
#include <cstdlib> // For rand() and srand() functions
#include <ctime>   // For time() function

double* dynamicArray(int N, double M) {
    double* arr = new double[N];
    for (int i = 0; i < N; ++i) {
        arr[i] = M;
    }
    return arr;
}

double arrayMax(double* arr, int size) {
    double maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    // Part 6
    int arraySize = 5;
    double* dynamicArr = dynamicArray(arraySize, 10.0);

    double max = arrayMax(dynamicArr, arraySize);
    std::cout << "Maximum value in the dynamic array: " << max << std::endl;

    delete[] dynamicArr; // Deallocate the dynamic array

    // Part 7
    int newArraySize = 8;
    double initialValue = 7.5;
    double* customDynamicArr = dynamicArray(newArraySize, initialValue);

    // Print the array elements
    std::cout << "Array elements initialized with " << initialValue << ":\n";
    for (int i = 0; i < newArraySize; ++i) {
        std::cout << customDynamicArr[i] << " ";
    }
    std::cout << std::endl;

    delete[] customDynamicArr; // Deallocate the dynamic array

    return 0;
}
