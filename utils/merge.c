#include "imports.h"

void merge(Product arr[], int l, int m, int r)
{
    int len1 = m - l + 1, len2 = r - m;
    Product left[len1], right[len2];
    for (int i = 0; i < len1; i++)
        left[i] = arr[l + i];
    for (int i = 0; i < len2; i++)
        right[i] = arr[m + 1 + i];
 
    int i = 0;
    int j = 0;
    int k = l;
 
    while (i < len1 && j < len2)
    {
        if (left[i].number <= right[j].number)
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
 
    while (i < len1)
    {
        arr[k] = left[i];
        k++;
        i++;
    }
 
    while (j < len2)
    {
        arr[k] = right[j];
        k++;
        j++;
    }
}
 