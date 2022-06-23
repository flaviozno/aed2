#include "imports.h"

void countSort(Product *vector, int maxLenght)
{
    printf("%d", maxLenght);
    Product output[maxLenght];
    int count[maxLenght + 1], i;
    memset(count, 0, sizeof(count));

    for (i = 0; vector[i].number; ++i)
        ++count[vector[i].number];

    for(i = 1; i <= maxLenght; ++i)
        count[i] += count[i - 1];

    for (i = 0; vector[i].number; ++i)
    {
        output[count[vector[i].number] - 1] = vector[i];
        --count[vector[i].number];
    }

    for (i = 0; vector[i].number; ++i)
        vector[i] = output[i];
}