
#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
    // Luodaan Toyota Corolla
    Car car("Toyota", "Corolla");

    // Asetetaan moottorin tiedot
    car.setEngine();

    // Asetetaan renkaiden tiedot
    car.setWheels();

    // Tulostetaan auton tiedot
    car.printDetails();

    return 0;
}
