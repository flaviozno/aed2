
#include "imports.h"
 
void swap_(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void bubbleSort(int *vector, int maxLength)
{
    int i, j;
    for (i = 0; i <maxLength  - 1; i++)
 
        for (j = 0; j < maxLength - i - 1; j++)
            if (vector[j] > vector[j + 1])
                swap_(&vector[j], &vector[j + 1]);
}