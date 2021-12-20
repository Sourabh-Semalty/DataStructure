#include <iostream>

// Sum of N natural number means
// I/p => N
// O/p => 1+2+3+4....n;

int sumOfN(int n)
{
    // using static the activation record will not be generated again and again less memory consumption in stack
    static int total = 0; //using static so, value won't get refereshed when another call happens

    if (n > 0)
    {
        total += n;
        sumOfN(n - 1);
    }
    return total;
}

// Time complexity of O(1)

int sumOfN_with_formula(int n)
{
    return (n * (n + 1) / 2);
}

int main(int argc, char const *argv[])
{
    // As using std because don't want to load the library
    int n; // n is the nth number to be get sum
    std::cout << "Welcome to the Progarm of Sum of N natural Numbers" << std::endl;
    std::cout << "Enter the N'th number" << std::endl;
    std::cin >> n;
    std::cout << "Sum of N number is " << sumOfN(n);
    // std::cout << sumOfN_with_formula(n); // uncomment to check the result
    return 0;
}

// Time Complexity => O(n);
// Space Complexity  => O(n);