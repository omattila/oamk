
#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{
    ItalianChef italianChef("Anthony Bourdain");

    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();

    cout << "name of the Italian Chef is "
         << italianChef.getName() << endl;

    return 0;
}
