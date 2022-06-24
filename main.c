#include "./utils/imports.h"

int main()
{
    Product *vet;
    int opt, tamanho, flag;
    clock_t ini, fim;
    do
    {
        printf("\n\t --- Menu ---");
        printf("\n 0 - Sair");
        printf("\n 1 - Gerar vetor");
        printf("\n 2 - Mostrar vetor");
        printf("\n 3 - BubbleSort");
        printf("\n 4 - HeapSort");
        printf("\n 5 - Mediana de 3");
        printf("\n 6 - Pancake");
        printf("\n 7 - CoutingSort");
        printf("\n 8 - TimSort");
        printf("\n 9 - One 4 all");
        printf("\n 10 - Liberar vetor");
        printf("\n R: ");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            printf("\nInforme o tamanho do vetor: ");
            scanf("%d", &tamanho);
            vet = (Product *)malloc(tamanho * (sizeof(Product)));
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
            flag = orderBy(flag);
            ini = clock();
            bubbleSort(vet, tamanho, flag);
            fim = clock();
            resetVector(vet, tamanho);
            printf("\n\tTempo gasto (aleatorios): %.5f seconds.\n", ((double)fim - ini) / CLOCKS_PER_SEC);
            break;
        case 4:
            flag = orderBy(flag);
            ini = clock();
            heapSort(vet, tamanho, flag);
            fim = clock();
            resetVector(vet, tamanho);
            printf("\n\tTempo gasto (aleatorios): %.5f seconds.\n", ((double)fim - ini) / CLOCKS_PER_SEC);
            break;
        case 5:
            flag = orderBy(flag);
            ini = clock();
            quicksort(vet, 0, tamanho - 1, flag);
            fim = clock();
            resetVector(vet, tamanho);
            printf("\n\tTempo gasto (aleatorios): %.5f seconds.\n", ((double)fim - ini) / CLOCKS_PER_SEC);
            break;
        case 6:
            flag = orderBy(flag);
            ini = clock();
            pancakeSort(vet, tamanho, flag);
            fim = clock();
            resetVector(vet, tamanho);
            printf("\n\tTempo gasto (aleatorios): %.5f seconds.\n", ((double)fim - ini) / CLOCKS_PER_SEC);
            break;
        case 7:
            flag = orderBy(flag);
            ini = clock();
            countSort(vet, tamanho, flag);
            fim = clock();
            resetVector(vet, tamanho);
            printf("\n\tTempo gasto (aleatorios): %.5f seconds.\n", ((double)fim - ini) / CLOCKS_PER_SEC);
            break;
        case 8:
            flag = orderBy(flag);
            ini = clock();
            timSort(vet, tamanho, flag);
            fim = clock();
            resetVector(vet, tamanho);
            printf("\n\tTempo gasto (aleatorios): %.5f seconds.\n", ((double)fim - ini) / CLOCKS_PER_SEC);
            break;
        case 9:
            printf("\nTodos os metodos usaram o mesmo vetor de struct!");
            flag = orderBy(flag);
            one4AllTime(vet, tamanho, flag);
            break;
        case 10:
            if (vet != NULL)
            {
                free(vet);

                printf("\nVetor liberado com sucesso!");
            }
            else
            {
                printf("\nVetor nao alocado");
            }
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
