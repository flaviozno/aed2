#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct product {
        int number;
        char type[10];
};

typedef struct product Product;

// ---Necessary to use timer---
clock_t t;

// ---Functions to manipulate vector ---
int fillVector(Product *vector, int maxLength);
int printVector(Product *vector, int maxLength);

void swap(Product *a, Product *b);

void merge(Product arr[], int l, int m, int r);

void insertionSort(Product arr[], int left, int right);
// ---Quick Sort---
void quicksort(int *vector, int left, int right);

// ---Pancake Sort---
void pancakeSort(Product *vector, int maxLength);

// ---Bubbke Sort---
void bubbleSort(Product *vector, int maxLength);

// ---Heap Sort---
void heapSort(Product *vector, int maxLenght);

// ---Tim Sort---
void timSort(Product *vector, int maxLenght);

// ---Counting Sort ---
void countSort(Product *vector, int maxLenght);