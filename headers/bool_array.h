#include <stdlib.h>

struct Bool {
    char *charRef;
    char boolPos;

    Bool(char *ref, char position) :
       charRef(ref),
                 boolPos(position)
    {}

    Bool& operator=(const bool value);

    bool operator*();
};

class BoolArray {
    char *buffer;
    size_t size;

    public:
        BoolArray(size_t size) :
        size (size / 8 + 1),
        buffer((char *) calloc(size / 8 + 1, sizeof(char)))
        {}

        Bool operator[] (int index);

        void print();

        ~BoolArray() { free(buffer); }
};