#include "./utils/imports.h"

int main(){
    int vet[100];
    fillVector(vet, 100);
    printVector(vet, 100);
    timSort(vet, 100);
    printVector(vet, 100);

    return 0;
}