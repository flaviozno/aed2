#include "imports.h"

void one4AllTime(Product *vector, int tamanho, int flag)
{
    if (flag == 1)
    {
        Product **vet2 = (Product **)malloc(6 * sizeof(Product));
        for (int i = 0; i < 6; i++)
        {
            vet2[i] = vector;
        }
        clock_t ini[6], fim[6];
        ini[0] = clock();
        bubbleSort(vet2[0], tamanho, flag);
        fim[0] = clock();
        printf("\n\tTempo gasto Bubble: %.5f seconds.\n", ((double)fim[0] - ini[0]) / CLOCKS_PER_SEC);

        ini[1] = clock();
        heapSort(vet2[1], tamanho, flag);
        fim[1] = clock();
        printf("\n\tTempo gasto Heap: %.5f seconds.\n", ((double)fim[1] - ini[1]) / CLOCKS_PER_SEC);

        ini[2] = clock();
        quicksort(vet2[2], 0, tamanho - 1, flag);
        fim[2] = clock();
        printf("\n\tTempo gasto Mediana: %.5f seconds.\n", ((double)fim[2] - ini[2]) / CLOCKS_PER_SEC);

        ini[3] = clock();
        pancakeSort(vet2[3], tamanho, flag);
        fim[3] = clock();
        printf("\n\tTempo gasto Pancake: %.5f seconds.\n", ((double)fim[3] - ini[3]) / CLOCKS_PER_SEC);

        ini[4] = clock();
        countSort(vet2[4], tamanho, flag);
        fim[4] = clock();
        printf("\n\tTempo gasto Couting: %.5f seconds.\n", ((double)fim[4] - ini[4]) / CLOCKS_PER_SEC);

        ini[5] = clock();
        timSort(vet2[5], tamanho, flag);
        fim[5] = clock();
        printf("\n\tTempo gasto Tim: %.5f seconds.\n", ((double)fim[5] - ini[5]) / CLOCKS_PER_SEC);

        free(vet2);
    }
    else
    {
        Product **vet2 = (Product **)malloc(6 * sizeof(Product));
        for (int i = 0; i < 6; i++)
        {
            vet2[i] = vector;
        }
        clock_t ini[6], fim[6];
        ini[0] = clock();
        bubbleSort(vet2[0], tamanho, flag);
        fim[0] = clock();
        printf("\n\tTempo gasto Bubble: %.5f seconds.\n", ((double)fim[0] - ini[0]) / CLOCKS_PER_SEC);

        ini[1] = clock();
        heapSort(vet2[1], tamanho, flag);
        fim[1] = clock();
        printf("\n\tTempo gasto Heap: %.5f seconds.\n", ((double)fim[1] - ini[1]) / CLOCKS_PER_SEC);

        ini[2] = clock();
        quicksort(vet2[2], 0, tamanho - 1, flag);
        fim[2] = clock();
        printf("\n\tTempo gasto Mediana: %.5f seconds.\n", ((double)fim[2] - ini[2]) / CLOCKS_PER_SEC);

        ini[3] = clock();
        pancakeSort(vet2[3], tamanho, flag);
        fim[3] = clock();
        printf("\n\tTempo gasto Pancake: %.5f seconds.\n", ((double)fim[3] - ini[3]) / CLOCKS_PER_SEC);

        ini[4] = clock();
        countSort(vet2[4], tamanho, flag);
        fim[4] = clock();
        printf("\n\tTempo gasto Couting: %.5f seconds.\n", ((double)fim[4] - ini[4]) / CLOCKS_PER_SEC);

        ini[5] = clock();
        timSort(vet2[5], tamanho, flag);
        fim[5] = clock();
        printf("\n\tTempo gasto Tim: %.5f seconds.\n", ((double)fim[5] - ini[5]) / CLOCKS_PER_SEC);

        free(vet2);
    }
}