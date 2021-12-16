#include <iostream>

void recur(int x[],int n)
{
    if (n >= 0)
    {
        std::cout << x[n];
        recur(x,n-1);
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4};
    recur(arr,3);
    return 0;
}
