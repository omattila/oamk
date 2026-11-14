
#include "Dog.h"
#include <iostream>

using namespace std;

Dog::Dog()
{
    cout << "Dog constructor" << endl;
}

Dog::~Dog()
{
    cout << "Dog destructor" << endl;
}

void Dog::callOut()
{
    cout << "Dog barks!" << endl;
}
