#include "imports.h"

void heapify(Product *vector, int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && vector[left].number > vector[largest].number)
        largest = left;

    if (right < n && vector[right].number > vector[largest].number)
        largest = right;

    if (largest != i)
    {
        swap(&vector[i], &vector[largest]);
        heapify(vector, n, largest);
    }
}

void heapSort(Product *vector, int maxLenght)
{
    for (int i = maxLenght / 2 - 1; i >= 0; i--)
        heapify(vector, maxLenght, i);

    for (int i = maxLenght - 1; i >= 0; i--)
    {
        swap(&vector[0], &vector[i]);
        heapify(vector, i, 0);
    }
}