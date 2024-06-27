//
// Created by BERKE on 6/28/2024.
//

#ifndef PRODUCT_ARRAYUTIL_H
#define PRODUCT_ARRAYUTIL_H
#include <stdlib.h>
#include <time.h>
#define randomize() srand(time(NULL))
void printArray(const int* arr, int size);
int getMax(const int* arr, int size);
int getSecondMax(const int* arr, int size);
void swap(int* a, int* b);
void gSwap(void* vp1, void* vp2, int size);
void bubbleSort(int* arr, int size);
void setRandomArray(int* arr, int size);
void reverseArray(int* arr, int size);
int getSumElements(int* arr, int size);
double getAverageElements(int* arr, int size);
double getStandardDivision(int* arr, int size);
int find(const int* arr, int search, int size);
#endif //PRODUCT_ARRAYUTIL_H
