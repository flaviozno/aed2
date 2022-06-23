#include "./utils/imports.h"

int main()
{
    Product vet[10];
    fillVector(vet, 10);
    printVector(vet, 10);
    countSort(vet, 10);
    printVector(vet, 10);
    return 0;
}