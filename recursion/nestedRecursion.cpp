#include <iostream>
using namespace std;

// Nested Recusion when a recursion function contain another recursion call insite it's paramters
int fun(int n)
{

    if (n > 100)
        return (n - 10);
    else
        return fun(fun(n + 11)); // first inside the recusion call will done then outer call will goes on
}

int main(int argc, char const *argv[])
{
    cout << fun(95);
    return 0;
}
