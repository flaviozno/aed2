#include "imports.h"

void countSort(Product *vector, int maxLenght)
{
    int maxvalue = vector[0].number;
    int i, j, k;
    for (i = 0; i < maxLenght; i++)
    {
        if (maxvalue < vector[i].number)
            maxvalue = vector[i].number;
    }
    
    int *buckets = (int *)(malloc(maxvalue * sizeof(int)));

    for (i = 0; i < maxLenght; i++)
    {
        buckets[i] = 0;
    }

    for (i = 0; i < maxLenght; i++)
    {
        buckets[vector[i].number]++;
    }

    for (i = 0, j = 0; j <= maxvalue; j++)
    {
        for (k = buckets[j]; k > 0; k--)
            vector[i++].number = j;
    }
    free(buckets);
}