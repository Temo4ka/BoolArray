#include "../headers/bool_array.h"

Bool& BoolArray::operator[] (int index) {
    return Bool(&(buffer[index / 8]), index % 8);
}

Bool& Bool::operator=(const bool value) {
    if (value)
        *charRef |= (1 << this -> boolPos);
    else
        *charRef &= (255 - (1 << boolPos));
}
