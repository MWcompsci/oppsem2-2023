#include "workshop.h"
#include <cstdlib> // For rand() function

// Function implementation for dynamicArray
double* dynamicArray(int N, double M) {
    double* arr = new double[N];
    for (int i = 0; i < N; ++i) {
        arr[i] = M;
    }
    return arr;
}
