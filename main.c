#include "./utils/imports.h"

void resetVector(Product *vector, int tamanho);

int main()
{
    Product *vet;
    int opt, tamanho;
    do
    {
        printf("\t --- Menu ---");
        printf("\n 0 - Sair");
        printf("\n 1 - Gerar vetor");
        printf("\n 2 - Mostrar vetor");
        printf("\n 3 - BubbleSort");
        printf("\n 4 - HeapSort");
        printf("\n 5 - Mediana de 3");
        printf("\n 6 - Pancake");
        printf("\n 7 - CoutingSort");
        printf("\n 8 - TimSort");
        printf("\n R: ");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            printf("\nInforme o tamanho do vetor: ");
            scanf("%d", &tamanho);
            vet = (Product *)(malloc(tamanho * (sizeof(Product))));
            if (vet == NULL)
            {
                printf("\nErro ao alocar vetor");
                return 1;
            }
            fillVector(vet, tamanho);
            break;
        case 2:
            if (vet != NULL)
            {
                printVector(vet, tamanho);
            }
            else
            {
                printf("\nVetor nao alocado");
            }
            break;
        case 3:
            bubbleSort(vet, tamanho);
            resetVector(vet, tamanho);
            break;
        case 4:
            heapSort(vet, tamanho);
            resetVector(vet, tamanho);
            break;
        case 5:
            quicksort(vet, 0, tamanho - 1);
            resetVector(vet, tamanho);
            break;
        case 6:
            pancakeSort(vet, tamanho);
            resetVector(vet, tamanho);
            break;
        case 7:
            countSort(vet, tamanho);
            resetVector(vet, tamanho);
            break;
        case 8:
            timSort(vet, tamanho);
            resetVector(vet, tamanho);
            break;
        default:
            if (opt != 0)
            {
                printf("\nOpcao invalida!");
            }
        }
    } while (opt != 0);
    return 0;
}
void resetVector(Product *vector, int tamanho)
{
    printVector(vector, tamanho);
    printf("\n\t --- Vetor foi reiniciado ---\n");
    fillVector(vector, tamanho);
}