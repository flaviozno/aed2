#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAX_RANGE 1000000
#define MIN_RANGE 10.000

struct product
{
        int number;
        char type[10];
};

typedef struct product Product;

// ---Functions to manipulate vector ---
int fillVector(Product *vector, int maxLength);
int printVector(Product *vector, int maxLength);

void swap(Product *a, Product *b);

void merge(Product arr[], int l, int m, int r, int flag);

void insertionSort(Product arr[], int left, int right, int flag);
// ---Quick Sort---
void quicksort(Product *vector, int left, int right, int flag);

// ---Pancake Sort---
void pancakeSort(Product *vector, int maxLength, int flag);

// ---Bubbke Sort---
void bubbleSort(Product *vector, int maxLength, int flag);

// ---Heap Sort---
void heapSort(Product *vector, int maxLenght, int flag);

// ---Tim Sort---
void timSort(Product *vector, int maxLenght, int flag);

// ---Counting Sort---
void countSort(Product *vector, int maxLenght, int flag);

// ---All---
void one4AllTime(Product *vector, int tamanho, int flag);

// ---orderBy---
int orderBy(int flag);

// ---reset---
void resetVector(Product *vector, int tamanho);