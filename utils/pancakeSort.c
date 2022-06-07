#include "imports.h"

void flip(int *vector, int index)
{
	int temp, start = 0;
	while (start < index) {
		temp = vector[start];
		vector[start] = vector[index];
		vector[index] = temp;
		start++;
		index--;
	}
}

int findMax(int *vector, int maxLength)
{
	int mi, i;
	for (mi = 0, i = 0; i < maxLength; ++i)
		if (vector[i] > vector[mi])
			mi = i;
	return mi;
}

void pancakeSort(int *vector, int maxLength)
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

