
#include "Engine.h"

// Oletuskonstruktori
Engine::Engine()
{
    horsepower = 0;
    displacement = 0.0;
}

// Parametrillinen konstruktori
Engine::Engine(int horsepower, double displacement)
{
    this->horsepower = horsepower;
    this->displacement = displacement;
}

// Palauttaa hevosvoimat
int Engine::getHorsepower()
{
    return horsepower;
}

// Asettaa hevosvoimat
void Engine::setHorsepower(int horsepower)
{
    this->horsepower = horsepower;
}

// Palauttaa moottorin tilavuuden
double Engine::getDisplacement()
{
    return displacement;
}

// Asettaa moottorin tilavuuden
void Engine::setDisplacement(double displacement)
{
    this->displacement = displacement;
}
