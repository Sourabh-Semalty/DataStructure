#include <iostream>
int main(int argc, char const *argv[])
{
    int a = 10; // Declare a simple variable with the value of 10
    int *p;     // Declare a pointer

    p = &a; // Initilization  // here p is integer variable and address of a is being stored in p // Exp => 2001,2002,2003,2004 address is stored in p as 4 addess give because int takes 4 bytes
    std::cout << "The value stored is = \t " <<  *p << std::endl;// Dereferencing
    std::cout << "The address is = \t " << p;  // printing the address
    return 0;
}
