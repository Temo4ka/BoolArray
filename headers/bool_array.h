#include <stdlib.h>

struct Bool {
    char *charRef;
    char boolPos;

    Bool(char *ref, char position) {
        charRef =   ref   ;
        boolPos = position;
    }

    Bool& operator=(const bool value);
};

class BoolArray {
    char *buffer;
    size_t size;

    public:
        BoolArray(size_t size) :
        size (size),
        buffer((char *) calloc(size, sizeof(char)))
        {}

        Bool& operator[] (int index);

        ~BoolArray() { free(buffer); }
};