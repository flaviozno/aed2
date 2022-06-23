#include "imports.h"

void flip(Product *vector, int index)
{
	int start = 0;
	Product temp;
	while (start < index) {
		temp = vector[start];
		vector[start] = vector[index];
		vector[index] = temp;
		start++;
		index--;
	}
}

int findMax(Product *vector, int maxLength)
{
	int mi, i;
	for (mi = 0, i = 0; i < maxLength; ++i)
		if (vector[i].number > vector[mi].number)
			mi = i;
	return mi;
}

void pancakeSort(Product *vector, int maxLength)
{
	for (int curr_size = maxLength; curr_size > 1;--curr_size)
	{
		int mi = findMax(vector, curr_size);
		if (mi != curr_size - 1) {
			flip(vector, mi);
			flip(vector, curr_size - 1);
		}
	}
}

