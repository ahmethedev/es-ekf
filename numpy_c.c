#include "numpy_c.h"
#include <stdlib.h>

double dot_product(double *a, double *b, int n) {
    double result = 0.0;
    for (int i = 0; i < n; i++) {
        result += a[i] * b[i];
    }
    return result;
}

double* zeros(int size) {
    double* array = (double*)malloc(size * sizeof(double));
    if (array == NULL) {
        // Handle memory allocation failure
        return NULL;
    }

    // Initialize all elements to 0
    for (int i = 0; i < size; i++) {
        array[i] = 0.0;
    }

    return array;
}
