#include <iostream>

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
    double myDoubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int arraySize = sizeof(myDoubleArray) / sizeof(myDoubleArray[0]);

    double max = arrayMax(myDoubleArray, arraySize);

    std::cout << "Maximum value in the array: " << max << std::endl;

    return 0;
}
