
#ifndef WHEEL_H
#define WHEEL_H

#include <string>

class Wheel
{
private:
    int size;
    std::string type;

public:
    Wheel();
    Wheel(int size, std::string type);

    int getSize();
    void setSize(int size);

    std::string getType();
    void setType(std::string type);
};

#endif // WHEEL_H
