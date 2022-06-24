#include "imports.h"

void insertionSort(Product arr[], int left, int right, int flag)
{
    if (flag == 1)
    {
        for (int i = left + 1; i <= right; i++)
        {
            Product temp = arr[i];
            int j = i - 1;
            while (j >= left && arr[j].number > temp.number)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
    }
    else
    {
        for (int i = left + 1; i <= right; i++)
        {
            Product temp = arr[i];
            int j = i - 1;
            while (j >= left && strcmp(arr[j].type, temp.type) > 0)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
    }
}