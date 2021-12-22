#include <iostream>
using namespace std;

int fib[10];

// This time Complexity is O(n)
// int recursiveFibo(int n)
// {
//     if (n <= 1)
//     {
//         fib[n] = n;
//         return n;
//     }
//     else
//     {
//         if (fib[n - 1] == -1)
//             fib[n - 1] = recursiveFibo(n - 1);
//         else if (fib[n - 2] == -1)
//             fib[n - 2] = recursiveFibo(n - 2);
//         fib[n] = fib[n - 1] + fib[n - 2];
//         return fib[n - 1] + fib[n - 2];
//     }
// }

// This Time Complexity is -> O(2^n)
int fibonacci(int n)
{
    if (n <= 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char const *argv[])
{
    cout << fibonacci(9) << endl;
     for (int i = 0; i < 10; i++)
    {
        fib[i] = -1;
    }
    return 0;
}
