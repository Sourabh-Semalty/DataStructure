#include <iostream>
using namespace std;

int foo(int n, int sum)
{
    int k =0,j=0;
    if(n==0) return;
    k = n%10;
    j= n/10;
    sum = sum+k;
    foo(j,sum);
    cout << k;
}

int main()
{
    int a = 2048, sum = 0;
    foo(a, sum);
    cout << sum;
    return 0;
}