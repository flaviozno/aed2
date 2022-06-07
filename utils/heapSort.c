#include "imports.h"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int *vector, int n, int i) {
int largest = i;
int left = 2 * i + 1;
int right = 2 * i + 2;

if (left < n && vector[left] > vector[largest])
	largest = left;

if (right < n && vector[right] > vector[largest])
	largest = right;

if (largest != i) {
	swap(&vector[i], &vector[largest]);
	heapify(vector, n, largest);
}

}

void heapSort(int *vector, int maxLenght) {

    for (int i = maxLenght / 2 - 1; i >= 0; i--)
        heapify(vector, maxLenght, i);

    for (int i = maxLenght - 1; i >= 0; i--) {
        swap(&vector[0], &vector[i]);
        heapify(vector, i, 0);
    }

}