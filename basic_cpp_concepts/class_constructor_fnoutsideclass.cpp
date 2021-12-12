#include <iostream>
using namespace std;

// Simple example of class with function outside the class
// using scope resolution

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle() { length = breadth = 1; }; // constructor
    Rectangle(int l, int b);               // overloaded paramterized constructor
    int area();                            // facilitator -> as these type of function perform some operation on data member
    int perimeter();                       // facilitator
    int getlength() { return length; };    // accessor -> it is used to access some data memebr value
    void setlength(int l) { length = l; }; // mutator -> it is used to set the value in the data member
    ~Rectangle();                          // deconstructor -> if there is any dynamic memory allocation then we use this to deallocate the memory
};

Rectangle::Rectangle(int l, int b)
{
    this->length = l;
    this->breadth = b;
}
int Rectangle::area()
{
    return this->length * this->breadth;
}
int Rectangle::perimeter()
{
    return 2 * (this->length + this->breadth);
}

Rectangle::~Rectangle()
{
}
int main()
{
    Rectangle r(5, 10);
    cout << "The area of rectangle is " << r.area() << endl;
    cout << "The perimeter of rectanlge is " << r.perimeter();
}