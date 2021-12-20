#include<iostream>
using namespace std;

void fun1(int); // As we need to provide prototype here because we calling a function which is not declared yet
// Indirect recursion is recursion where more than one function is calling each other in a ciruclar pattern
void fun2(int n) {
    if(n > 1) {
        cout << n << endl;
        fun1(n-1);
    }
}

void fun1(int x) {
    if(x > 0) {
        cout << x << endl; 
        fun2(x/2);
    }
}


int main(int argc, char const *argv[])
{
    fun1(20);
    return 0;
}
