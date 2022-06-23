#include "imports.h"

void swap_quick(Product *vector, int left, int right)
{
   Product temp;
   temp = vector[left];
   vector[left] = vector[right];
   vector[right] = temp;
}

int particao(Product *vector, int left, int right)
{
   int i, fim;

   fim = left;
   for (i = left + 1; i <= right; i++)
      if (vector[i].number < vector[left].number)
      {
         fim = fim + 1;
         swap_quick(vector, fim, i);
      }
   swap_quick(vector, left, fim);
   return fim;
}

void quicksort(Product *vector, int left, int right)
{
   int i;
   if (right <= left)
      return;
   swap_quick(vector, (left + right) / 2, left + 1);
   if (vector[left].number > vector[left + 1].number)
      swap_quick(vector, left, left + 1);
   if (vector[left].number > vector[right].number)
      swap_quick(vector, left, right);
   if (vector[left + 1].number > vector[right].number)
      swap_quick(vector, left + 1, right);
   i = particao(vector, left + 1, right - 1);
   quicksort(vector, left, i - 1);
   quicksort(vector, i + 1, right);
}
