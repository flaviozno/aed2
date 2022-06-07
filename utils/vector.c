#include "imports.h"

int fillVector(int *vector, int maxLength){

    if(maxLength <= 0) return 1;

    for(int i=0; i<maxLength; i++){
        vector[i] = 1 + (rand() % 10000);
    }

    return 0;
}

int printVector(int *vector, int maxLength){
    if(maxLength <= 0) return 1;

    printf("\nImprimindo conteudo do vetor: \n");
    for(int i=0; i<maxLength; i++){
        printf("%d ", vector[i]);
    }

    return 0;
}