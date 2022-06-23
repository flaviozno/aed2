
#include "imports.h"
 
 
void bubbleSort(Product *vector, int maxLength)
{
    int i, j;
    for (i = 0; i <maxLength - 1; i++)

        for (j = 0; j < maxLength - i - 1; j++)
            if (vector[j].number > vector[j + 1].number)
                swap(&vector[j], &vector[j + 1]);
}