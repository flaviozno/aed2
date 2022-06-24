#include "imports.h"

void heapify(Product *vector, int n, int i, int flag)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (flag == 1)
    {
        if (left < n && vector[left].number > vector[largest].number)
            largest = left;

        if (right < n && vector[left].number > vector[largest].number)
            largest = right;

        if (largest != i)
        {
            swap(&vector[i], &vector[largest]);
            heapify(vector, n, largest, flag);
        }
    }
    else
    {
        if (left < n && (strcmp(vector[left].type, vector[largest].type) > 0))
            largest = left;

        if (right < n && (strcmp(vector[left].type, vector[largest].type) > 0))
            largest = right;

        if (largest != i)
        {
            swap(&vector[i], &vector[largest]);
            heapify(vector, n, largest, flag);
        }
    }
}

void heapSort(Product *vector, int maxLenght, int flag)
{
    for (int i = maxLenght / 2 - 1; i >= 0; i--)
        heapify(vector, maxLenght, i, flag);

    for (int i = maxLenght - 1; i >= 0; i--)
    {
        swap(&vector[0], &vector[i]);
        heapify(vector, i, 0, flag);
    }
}