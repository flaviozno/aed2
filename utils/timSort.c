#include "imports.h"

int min(int a, int b) {
    if(a > b) return a;
    if(a < b) return b;
    if(a == b) return a;
}

void timSort(Product *vector, int maxLenght)
{
    for (int i = 0; i < maxLenght; i+=maxLenght)
        insertionSort(vector, i, min((i+maxLenght-1),(maxLenght-1)));
 
    for (int size = maxLenght; size < maxLenght; size = 2*size)
    {
        for (int left = 0; left < maxLenght;left += 2*size)
        {
            int mid = left + size - 1;
            int right = min((left + 2*size - 1),(maxLenght-1));
              if(mid < right)
                merge(vector, left, mid, right);
        }
    }
}