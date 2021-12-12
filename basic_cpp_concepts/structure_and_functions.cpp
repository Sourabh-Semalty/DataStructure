#include <iostream>

// This is the structure and function and due to this the concept of class comes up in c++ 
// as in the classes the function belongs to the class
// ! Note : this is the highest level programming in c
struct Rectangle
{
    int length;
    int breadth;
};

void intilizeRectangle(struct Rectangle *r1, int l, int b)
{
    r1->length = l;
    r1->breadth = b;
}

int area(int l, int b)
{
    return l * b;
}

void changeLenght(struct Rectangle *r, int l)
{
    r->length = l;
}
int main(int argc, char const *argv[])
{
    struct Rectangle r;
    intilizeRectangle(&r, 10, 20);

    int a = area(r.length, r.breadth);

    changeLenght(&r, 55);

    printf("%d", area(r.length, a));

    return 0;
}
