#include<iostream>
using namespace std;

// ? Tree Recursion
// * If a recursive function contain more than one recursive call then it is a tree recursion
void fun(int n) {
    if(n > 0) {
        printf("%d",n);
        fun(n-1);
        fun(n-1);
    }
}

int main(int argc, char const *argv[])
{
    fun(3);
    return 0;
}

// Time Complexity => O(2^n)
// Space Complexity => O(n)