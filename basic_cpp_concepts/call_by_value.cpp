#include <iostream>
using namespace std;

// this example is call by value
// In call by value the change in the formal value will not be reflected in actual param so,
// even we swap the value it will be swapper in the below main function
//  so, adding or return some piece of value can be the option for call by value
void swap(int x, int y) // formal param
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "After swap a & b \t = " << x << "   "  << y;
    printf("%d%d", x, y); // actual param
}
int main(int argc, char const *argv[])
{
    int a = 10, b = 20;
    cout << "Before a & b \t = " << a << "   " << b << endl;
    swap(a, b);
    return 0;
}
