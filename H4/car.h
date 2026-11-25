
#ifndef CAR_H
#define CAR_H

#include <string>
#include "Engine.h"
#include "Wheel.h"

class Car
{
private:
    Engine objEngine;

    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;

    std::string model;
    std::string brand;

public:
    Car();
    Car(std::string brand, std::string model);

    void setEngine();
    void setWheels();

    std::string getModel();
    void setModel(std::string model);

    std::string getBrand();
    void setBrand(std::string brand);

    void printDetails();
};

#endif // CAR_H
