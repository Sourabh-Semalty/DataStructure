#include <iostream>

// normal

// using recursion
void TOH(int n, int A, int B, int C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B);
        std::cout << A << " to " << C << std::endl;
        TOH(n - 1, B, A, C);
    }
}

int main(int argc, char const *argv[])
{
    std::cout << "Welcome to the Progarm of Combinators Numbers " << std::endl;
    TOH(3, 1, 2, 3);
    return 0;
}
