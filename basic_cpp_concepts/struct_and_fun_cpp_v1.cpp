#include <iostream>

// Change the previous structure to the c classes
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        this->length = l;
        this->breadth = b;
    }

    int area()
    {
        return this->length * this->breadth;
    }

};

int main(int argc, char const *argv[])
{
    Rectangle Rectangle(20, 30);
    std::cout << Rectangle.area();
    return 0;
}