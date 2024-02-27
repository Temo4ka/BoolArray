#include "../headers/bool_array.h"
#include "stdio.h"

Bool BoolArray::operator[] (int index) {
    return Bool(&(buffer[index / 8]), index % 8);
}

Bool& Bool::operator=(const bool value) {
    if (value)
        *charRef |= (1 << this -> boolPos);
    else
        *charRef &= (255 - (1 << boolPos));
    
    return *this;
}

bool Bool::operator*() {
    return (*charRef & (1 << boolPos));
}

void BoolArray::print() {
    for (int i = 0 ; i < size * 8; i++) {
        Bool b(&(buffer[i / 8]), i % 8);

        printf("%d ", *b);
    }
    printf("\n");
}
