#include "imports.h"

int orderBy(int flag){
    printf("\nDeseja ordenar por: 1 - inteiro, 2 - string: ");
    scanf("%d", &flag);
    return flag;
}