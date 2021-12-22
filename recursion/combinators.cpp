#include <iostream>

// normal
int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}
int nCr(int n, int r)
{
    int num, den;

    num = fact(n);
    den = fact(r) * fact(n - r);

    return num / den;
}

// using recursion
int combinators(int n, int r)
{
    if (r == 0 || r == n)
    {
        return 1;
    }
    else
    {
        return combinators(n - 1, r - 1) + combinators(n - 1, r);
    }
}

int main(int argc, char const *argv[])
{
    std::cout << "Welcome to the Progarm of Combinators Numbers " << std::endl;
    std::cout << "Total is " << combinators(3, 1);
    return 0;
}
