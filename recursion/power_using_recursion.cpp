#include <iostream>
using namespace std;

// using static
int stat_exponent(int n, int p)
{

    static int total = n;
    if (p > 1)
    {
        total *= n;
        stat_exponent(n, p - 1);
    }
    return total;
}

// using normal
int exponent(int n, int p)
{
    if (p == 0 && n == 0)
        return 0;
    else if (p == 0)
        return 1;
    return n * exponent(n, p - 1);
}

// using faster exponent
int faster_exponent(int n, int p)
{
    if (p == 0 && n == 0)
        return 0;
    else if (p == 0)
        return 1;
    else if (p % 2 == 0)
        return faster_exponent(n * n, p / 2);
    return n * faster_exponent(n * n, (p - 1) / 2);
}

int main(int argc, char const *argv[])
{
    // exponent is function whose value constant raised to the power of the argument
    // Exp => 2^3 => 2*2*2 = 8
    int num, power;
    std::cout << "Welcome to the Progarm of Exponent" << std::endl;
    std::cout << "Enter the Number" << std::endl;
    std::cin >> num;
    std::cout << "Enter the Power" << std::endl;
    std::cin >> power;
    std::cout << "Total of " << num << "^" << power << " number is " << exponent(num, power) << endl;
    std::cout << "Total of " << num << "^" << power << " number is " << stat_exponent(num, power) << endl;
    std::cout << "Total of " << num << "^" << power << " number is " << faster_exponent(num, power);
    return 0;
}

// Time Complexity => O(n)
// Space Complexiy => O(n)

// faster => log(n);