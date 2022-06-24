#include "imports.h"

void countSort(Product *vector, int maxLenght, int flag)
{
    int i, j, k;
    if (flag == 1)
    {
        int maxvalue = vector[0].number;
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
    else
    {
        char output[maxLenght][10];

        int *count, i;
        count = (int *)malloc(maxLenght * sizeof(int));

        memset(count, 0, sizeof(count));

        for (i = 0; strlen(vector[i].type); ++i)
            ++count[strlen(vector[i].type)];

        for (i = 1; i <= maxLenght; ++i)
            count[i] += count[i - 1];

        for (i = 0; strlen(vector[i].type); ++i)
        {
            strcpy(output[count[strlen(vector[i].type)] - 1], vector[i].type);
            --count[strlen(vector[i].type)];
        }

        for (i = 0; strlen(vector[i].type); ++i)
            strcpy(vector[i].type, output[i]);
    }
}