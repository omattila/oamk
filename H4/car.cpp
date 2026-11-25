
#include "Car.h"
#include <iostream>

using namespace std;

// Oletuskonstruktori
Car::Car()
{
    model = "";
    brand = "";
}

// Parametrillinen konstruktori
Car::Car(string brand, string model)
{
    this->brand = brand;
    this->model = model;
}

// Asetetaan moottorin tiedot
void Car::setEngine()
{
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

// Asetetaan renkaiden tiedot
void Car::setWheels()
{
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");

    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");

    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");

    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");
}

// Palautetaan auton malli
string Car::getModel()
{
    return model;
}

// Asetetaan auton malli
void Car::setModel(string model)
{
    this->model = model;
}

// Palautetaan auton merkki
string Car::getBrand()
{
    return brand;
}

// Asetetaan auton merkki
void Car::setBrand(string brand)
{
    this->brand = brand;
}

// Tulostetaan auton tiedot
void Car::printDetails()
{
    cout << "Car brand: " << brand << endl;
    cout << "Car model: " << model << endl;

    cout << "Engine horsepower: "
         << objEngine.getHorsepower() << endl;

    cout << "Engine displacement: "
         << objEngine.getDisplacement() << endl;

    cout << "Wheel 1: " << objWheel1.getSize()
         << " " << objWheel1.getType() << endl;

    cout << "Wheel 2: " << objWheel2.getSize()
         << " " << objWheel2.getType() << endl;

    cout << "Wheel 3: " << objWheel3.getSize()
         << " " << objWheel3.getType() << endl;

    cout << "Wheel 4: " << objWheel4.getSize()
         << " " << objWheel4.getType() << endl;
}
