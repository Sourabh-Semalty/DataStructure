#include<iostream>
using namespace std;

int calc(int x , int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += **ppz;
    y = *py;
    x+= *py;
    return x+y+z;
}

int main(int argc, char const *argv[])
{
    int c , *b,**a;
    c=7;
    b = &c;
    a = &b;
    cout << calc(c,b,a);
    return 0;
}
