#include <iostream>
using namespace std;

// this example is call by address
// here change in the formal will change in actaul as because we are sending the address of the variable
// in the parameter and then using pointer which is pointing the address of the actul param variable
void swap(int *x, int *y) // formal param // this basically sames *p = &a;
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(int argc, char const *argv[])
{
    int a = 10, b = 20;
    cout << "Before a & b \t = " << a << "   " << b << endl;
    swap(&a, &b); //sending the address of the variable
    cout << "After swap a & b \t = " << a << "   " << b;
    return 0;
}
