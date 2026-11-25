
#include "Wheel.h"

using namespace std;

// Oletuskonstruktori
Wheel::Wheel()
{
    size = 0;
    type = "";
}

// Parametrillinen konstruktori
Wheel::Wheel(int size, string type)
{
    this->size = size;
    this->type = type;
}

// Palauttaa renkaan koon
int Wheel::getSize()
{
    return size;
}

// Asettaa renkaan koon
void Wheel::setSize(int size)
{
    this->size = size;
}

// Palauttaa renkaan tyypin
string Wheel::getType()
{
    return type;
}

// Asettaa renkaan tyypin
void Wheel::setType(string type)
{
    this->type = type;
}
