#include "../headers/bool_array.h"

int main() {
    BoolArray array(10);

    array[1] = true;
    array[3] = true;
    array[4] = true;
    array[4] = false;

    array.print();

    return 0;
}