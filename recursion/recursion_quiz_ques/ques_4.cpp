#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n <= INT_MIN || n >= INT_MAX)
            return 1;
        else if (n == 0)
            return 1;
        else if (x < -100.0 || x > 100.0)
            return 0;
        else if (x < 1 && x > 0)
            return 0;
        if (n > 0)
            return myPow(x, n - 1) * x;
        else
            return myPow(x, n + 1) / x;
    }
};

int main()
{
    Solution s;
    cout << s.myPow(0.00001, 2147483647);
}