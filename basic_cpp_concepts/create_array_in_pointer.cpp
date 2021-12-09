#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int *p;

    // Declaring the array in heap will be
    // In C;
    // Here in p variable we are assiging a 5*4 = 20 byte space of memory in p where (int *) means we are typecasting the malloc function return void problem to interger pointer
    // p = (int*) malloc(5*sizeof(int));

    // The syntax for Cpp will be
    // new operator is used to allocate the array in heap
    p = new int[5];
    return 0;
}
