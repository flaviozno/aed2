#include "imports.h"

void swap(Product *a, Product *b) {
    Product temp = *a;
    *a = *b;
    *b = temp;
}
