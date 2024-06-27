//
// Created by b00877391 on 6/27/2024.
//

#ifndef ARRAYUTIL_H
#define ARRAYUTIL_H
#include <stdlib.h>
#include <time.h>
#define randomize() srand(time(NULL))
void printArray(int* arr, int size);
int getMax(int* arr, int size);
int getSecondMax(int* arr, int size);
void swap(int* a, int* b);
void gSwap(void* vp1, void* vp2, int size);
void bubbleSort(int* arr, int size);
void setRandomArray(int* arr, int size);
void reverseArray(int* arr, int size);
int getSumElements(int* arr, int size);
double getAverageElements(int* arr, int size);
double getStandardDivision(int* arr, int size);
int find(int* arr, int search, int size);
#endif //ARRAYUTIL_H
