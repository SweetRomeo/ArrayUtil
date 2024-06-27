//
// Created by BERKE on 6/28/2024.
//
#include "ArrayUtil.h"
#include <stdio.h>
#include <math.h>


void printArray(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int getMax(const int* arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int getSecondMax(const int* arr, int size) {
    int max = arr[0];
    int maxIdx = 0;
    for (int i = 1; i < size; ++i) {
        if (max < arr[i]) {
            max = arr[i];
            maxIdx = i;
        }
    }
    int secondMax = maxIdx == 0 ? arr[1] : arr[0];
    for (int i = 0; i < size; ++i) {
        if (secondMax < arr[i] && i != maxIdx) {
            secondMax = arr[i];
        }
    }
    return secondMax;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void gSwap(void* vp1, void* vp2, int size) {
    char* cp1 = vp1;
    char* cp2 = vp2;
    while (size--) {
        char temp = *cp1;
        *cp1 = *cp2;
        *cp2 = temp;
    }
}

void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int k = 0; k < size - 1 - i; ++k) {
            if (arr[k] > arr[k + 1]) {
                swap(arr+ k, arr + k + 1);
            }
        }
    }
}

void setRandomArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;
    }
}

void reverseArray(int* arr, int size) {
    for (int i = 0; i < size / 2; ++i) {
        swap(arr + i, arr + size - 1 - i);
    }
}

int getSumElements(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

double getAverageElements(int* arr, int size) {
    return getSumElements(arr,size) / size;
}

double getStandardDivision(int* arr, int size) {
    double standardDivision = 0.0;
    double average = getAverageElements(arr, size);
    for (int i = 0; i < size; ++i) {
        standardDivision += pow((average - arr[i]), 2);
    }
    return sqrt(standardDivision / (size - 1));
}

int find(const int* arr, int search, int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == search) {
            return i;
        }
    }
    return -1;
}