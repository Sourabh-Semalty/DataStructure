#include <iostream>
using namespace std;

// Array size cannot be increase till you create a new big array and transfer data to it and make the pointer to point that new array

int main(int argc, char const *argv[])
{
    int *old = new int[5];
    int *nw = new int[10];
    old[0] = 1;
    old[1] = 34;

    for (size_t i = 0; i < sizeof(old); i++)
        nw[i] = old[i];

    delete []old;
    old = nw;
    nw = NULL;

     for (size_t i = 0; i < sizeof(old); i++)
        cout << old[i] << endl;


    return 0;
}
