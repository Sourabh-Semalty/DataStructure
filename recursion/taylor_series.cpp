#include <iostream>
using namespace std;

// ? Taylor series
// * 1 + x/1 + x^2/2! + x^3/3! .... n;
// Basically, In above series we need to use 
// 1. sum of n number
// 2. factorial to n number
// 3. power of a x number

int taylorS(int x, int n)
{
    int static p = 1, f = 1; // using f = 1 for factorial and p for numertor cannot be zero in the taylor series
    int r;                   // r is used to reduced the time
    if (n == 0)
    {
        return 1;
    }
    else
    {
        r = taylorS(x, n - 1);
        p *= r;
        f *= n;
        return r + p / f;
    }
}
int main(int argc, char const *argv[])
{
    int num, power;
    std::cout << "Welcome to the Progarm of Taylor Series" << std::endl;
    std::cout << "Enter the Number" << std::endl;
    std::cin >> num;
    std::cout << "Enter the Power" << std::endl;
    std::cin >> power;
    std::cout << "Total of " << num << "^" << power << " number is " << taylorS(num, power) << endl;
    return 0;
}
