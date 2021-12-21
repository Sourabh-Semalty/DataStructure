#include <iostream>
using namespace std;

// Using Horner rule we can reduce the Time
// Time COmplexity will be o(n);
int taylorhorner(int x, int n)
{
    static int final = 1;
    if (n == 0)
        return final;
    else
    {
        final = 1 + x / n * final;
        return taylorhorner(x, n - 1);
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
    std::cout << "Total of " << num << "^" << power << " number is " << taylorhorner(num, power) << endl;
    return 0;
}
