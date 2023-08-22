#ifndef ORCHESTRA_H
#define ORCHESTRA_H
#include <string>
#include "Musician.h"

class Orchestra {
private:
    int maxSize;
    int currentSize;
    Musician* members;  // Dynamic array of Musicians

public:
    Orchestra(); 
    Orchestra(int size);
    int get_current_number_of_members();
    bool has_instrument(std::string instrument);
    Musician *get_members();
    bool add_musician(Musician new_musician);
    ~Orchestra();
};

#endif // ORCHESTRA_H