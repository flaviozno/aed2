#include "imports.h"

int fillVector(Product *vector, int maxLength)
{

    if (maxLength <= 0)
        return 1;
    int i, j;

    // Preenche as strings com letras aleatorias
    for (i = 0; i < maxLength; i++)
    {
        for (j = 0; j < 9; j++)
            vector[i].type[j] = rand() % (97 - 122 + 1) + 97;
        vector[i].type[j] = '\0';
    }

    for (int i = 0; i < maxLength; i++)
    {
        vector[i].number = 1 + (rand() % MAX_RANGE);
    }

    return 0;
}

int printVector(Product *vector, int maxLength)
{
    if (maxLength <= 0)
        return 1;

    printf("\nImprimindo conteudo do vetor: \n");
    for (int i = 0; i < maxLength; i++)
    {
        printf("Numero[%d]: %d\nNome[%d]: %s\n\n", i+1, vector[i].number, i+1, vector[i].type);
    }
    printf("\n");

    return 0;
}