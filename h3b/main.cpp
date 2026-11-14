
#include <iostream>
#include "Animal.h"
#include "Dog.h"

using namespace std;

int main()
{
    // Luodaan Animal-olio
    Animal animal;

    // Kutsutaan Animal-luokan metodia
    animal.callOut();

    cout << endl;

    // Luodaan Dog-olio
    Dog dog;

    // Kutsutaan Dog-luokan metodia
    dog.callOut();

    return 0;
}
