#include <iostream>
using namespace std;

// this example is call by reference
// ! Note that using call by reference is bit of heavy dependency as using this we are doing monologthic program althougth it look prodecual or modular
// ! so, for small function we can using this only 
// ! Reference only support in cpp not in c
void swap(int &x, int &y)   // call by reference is giving the nickname or alias to the same variable // &x = a;
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main(int argc, char const *argv[])
{
    int a = 10, b = 20;
    cout << "Before a & b \t = " << a << "   " << b << endl;
    swap(a, b); //sending the address of the variable
    cout << "After swap a & b \t = " << a << "   " << b;
    return 0;
}
