#include <iostream>
#include <memory>

#include "Car.h"
#include "Rectangle.h"
#include "Student.h"

using namespace std;

int main()
{
    // Car pinomuistiin

    Car car;

    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2022);

    car.printData();

    cout << endl;

    // Rectangle kekomuistiin

    Rectangle *rect = new Rectangle;

    rect->setWidth(5);
    rect->setHeight(3);

    cout << "Area: " << rect->getArea() << endl;
    cout << "Circumference: " << rect->getCircum() << endl;

    delete rect;

    cout << endl;

    // Student smart pointerilla

    shared_ptr<Student> student = make_shared<Student>();

    student->setName("Matti Meikalainen");
    student->setStudentNumber(12345);
    student->setAverage(4.2);

    cout << "Name: " << student->getName() << endl;
    cout << "Student number: " << student->getStudentNumber() << endl;
    cout << "Average: " << student->getAverage() << endl;

    return 0;
}