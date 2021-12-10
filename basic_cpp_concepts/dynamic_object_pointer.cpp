#include <iostream>
using namespace std;

// Here we are creating the an dynamic object and accessing the data using pointer
struct Rectangle
{
    int length;
    int breadth;
};
int main(int argc, char const *argv[])
{
    struct Rectangle *p;

    // Old C sytax  to create dynamic object
    // here we are assiging the size of 8  byte as if compiler is taking int to 4 byte in p variable of pointer
    // as we are typcasting malloc because it return void pointer which is a generic pointer
    // as pointer p is being created in stack but as we assign it to a new memory so, object will created in heap memory
    
    // Old way to do that  // * Note  you can comment out the below 3 line to check this and do comment the below new syntax code
    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle));  
    // (*p).length = 20;
    // cout << "the old way or the full way \t = \t " << (*p).length;
    
    
    // new syntax given by Cpp
    // New way to do that
    p = new struct Rectangle;
    p->length = 20; // assiging the data to strucuture using pointer
    cout << "Length of the Rectangle is \t = \t " << p->length;

    return 0;
}
