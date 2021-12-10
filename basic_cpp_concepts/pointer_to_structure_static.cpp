#include<iostream>
// * Declaration of the strucuture which is user-defined data type

// strucuture is the collection of data memebers under one name 
// it can be similar or disimilar means inside structure the data members can be int , float ,etc
struct Rectangle 
{
    int length;
    int breadth;
};

int main(int argc, char const *argv[])
{
    struct Rectangle r = {10,5};
    struct Rectangle *p = &r; // declaring a structure pointer

    std::cout << r.length << std::endl; // Static printing the strucutre data 

    // p.length 
    // that is not applicable because p is not a variable as we need to go to the r to use length and breadth
    // so, doing that we need to do 
    // Old syntax
    (*p).length = 25; // we can do this as (*p) using bracket to backward the dot operator precedence
    std::cout << "The length of Rectangle using Old syntax is \t = \t" << (*p).length << std::endl;
    
    // OR
    // New syntax
    p->length = 19;  // cpp have given us this -> operator for saving the above written code
    std::cout << "The length of Rectangle using New syntax is \t = \t" << p->length;
    return 0;
}
