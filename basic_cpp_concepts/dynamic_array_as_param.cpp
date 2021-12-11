#include <iostream>

// Here is an example of creating an dynamic array in function  and return it to the main

// int [] suppose to verifiy that this function will only return an array
//  either we can use * pointer also
int *dynamicArray(int size)
{
    // int p = (int *) malloc(size*sizeof(int)); Old method C
    int *p = new int[5];
    return p;
}
int main(int argc, char const *argv[])
{
    int *p;
    p = dynamicArray(3);
    p[0] = 1;
    p[1] = 4;
    p[2] = 5;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "The index of " << i << " value is  = " << *p << std::endl;
        p++;
    }

    delete p; // free up the memory which has been allocated to the heap
    return 0;
}
