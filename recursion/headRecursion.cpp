#include<iostream>
using namespace std;

// ? In headRecursion 
// * The recusion call is the first statment and the print or other thing will be done at returning time of the recursion

void fun(int n) {
    if(n > 0) {
        fun(n - 1);
        printf("%d",n);
    }
}

int main(int argc, char const *argv[])
{
    fun(3);
    return 0;
}
