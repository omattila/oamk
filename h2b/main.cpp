#include <iostream>
#include <vector>

#include "Car.h"

using namespace std;

int main()
{
    vector<Car> carList;

    carList.push_back(Car("Toyota", "Corolla", 2022));
    carList.push_back(Car("Volvo", "V70", 2018));
    carList.push_back(Car("BMW", "320", 2020));

    carList.at(1).printData();

    for(unsigned int i = 0; i < carList.size(); i++)
    {
        carList.at(i).printData();
    }

    return 0;
}