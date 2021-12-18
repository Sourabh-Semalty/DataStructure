#include <iostream>
using namespace std;

int normalRecur(int n)
{
    if(n > 0) {
        return normalRecur(n-1) + n;
    } return 0;
}
int staticRecur(int n)
{
    static int x = 0;
    if(n > 0) {
        x++;
        return staticRecur(n-1) + x;
    } return 0;
}
int main(int argc, char const *argv[])
{
    int x = 5;
    cout  << normalRecur(x);
    cout << endl;
    cout << staticRecur(x);
    return 0;
}

// After doing tracing
// Answer will be for normal recur is => 15
//  Answer will be for Static recur is => 25
