#include <iostream>

// ! Note As we can send structure as parameter also,
// ! As it compiler does support call by value , address, reference

struct Rectangle
{
    int length;
    int breadth;
};

void changeLength(struct Rectangle &r1) // example of call by refence
{
    r1.length = 15;
}
int areaOfReactangle(struct Rectangle r1) // example of call by value
{
    return r1.length * r1.breadth;
}

int perimterOfRectangle(struct Rectangle *r1) { // example of call by address 
    return r1->length * r1->breadth;
}
int main(int argc, char const *argv[])
{
    struct Rectangle r = {10, 5};
    std::cout << "Area of Rectangle " << areaOfReactangle(r) << std::endl;

    // changing the length of the strucutre
    //  ! either we can do this with call by address or call by reference
    // ! below example is of call by reference

    changeLength(r);
    std::cout << "The change length is " << r.length << std::endl;


    // * using call by address
    std::cout << "The perimeter of rectangle is " << perimterOfRectangle(&r);

    return 0;
}
