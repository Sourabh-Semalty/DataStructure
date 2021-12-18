#include<iostream>
using namespace std;

// Recursion has two phases
// 1. ascending 
// 2. descending
// In other loop there is only one phase that is ascending 
void tailHead(int n) {
    if(n > 0) {
        tailHead(n-1);
        printf("%d ",n);
    }
}
int main(int argc, char const *argv[])
{
    int x =3;
    tailHead(x); // Basically means we are using the recursion to print the data again and again with some decrease
    return 0;
}

// Time Complexity => O(n)