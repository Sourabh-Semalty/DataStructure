#include <iostream>
using namespace std;

// using static
int stat_fact(int n)
{
    // starting with 1 because if the factoral is 1 then multiple by 0 is 0
    // as 1! = 1;
    static int total = 1;
    if (n > 0)
    {
        total *= n;
        stat_fact(n - 1);
    }
    return total;
}

// using normal
int fact(int n)
{
    if (n == 0)
        return 1; // 0! = 1;
    else
        return fact(n - 1) * n;
}

int main(int argc, char const *argv[])
{
    // Factorial of a number is the function that multiple every number by every natural number below it
    // Factorial is a program  where
    // equaition is 1*2*3.....(n-1)*n;
    // simple if fac(n-1) *n => O/p
    int n;
    std::cout << "Welcome to the Progarm of factorial of a Number" << std::endl;
    std::cout << "Enter the Number" << std::endl;
    std::cin >> n;
    std::cout << "Factorial of " << n << " number is " << fact(n) << endl;
    std::cout << "Factorial of " << n << " number is " << stat_fact(n);
    return 0;
}

// Time Complexity => O(n)
// Space Complexiy => O(n)
