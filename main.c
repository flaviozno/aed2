#include "./utils/imports.h"

int main(){
    int vet[100];
    fillVector(vet, 100);
    printVector(vet, 100);
    quicksort(vet, 0, 99);
    printVector(vet, 100);
    fillVector(vet, 100);
    printVector(vet, 100);
    pancakeSort(vet, 100);
    printVector(vet, 100);
    fillVector(vet, 100);
    printVector(vet, 100);
    bubbleSort(vet, 100);
    printVector(vet, 100);
    fillVector(vet, 100);
    heapSort(vet, 100);
    printVector(vet, 100);

    return 0;
}