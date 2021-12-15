// Learned about space and timecomplexity for future algo purpose

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    // here time complexity is
    // * i = 0 => 1 ; i < n => n ; i++ => n   
    // O(n+1) => O(n)
    for (int i = 0; i < n; i++)
    {
        cout << i; // n
    }
    return 0;
}

// Timecomplexity can be defined using the iteration or time consuming by any part of the program
// Same goes for the Space complexity also
