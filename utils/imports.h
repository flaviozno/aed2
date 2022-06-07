#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// ---Necessary to use timer---
clock_t t;

// ---Functions to manipulate vector ---
int fillVector(int *vector, int maxLength);
int printVector(int *vector, int maxLength);

// ---Quick Sort---
void quicksort(int *vector, int left, int right);

// ---Pancake Sort---
void pancakeSort(int *vector, int maxLength);

// ---Bubbke Sort---
void bubbleSort(int *vector, int maxLength);

// ---Heap Sort---
void heapSort(int *vector, int maxLenght);