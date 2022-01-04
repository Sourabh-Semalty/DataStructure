#include <iostream>
using namespace std;

class Reverse
{
private:
public:
    void reverseArr(int *arr)
    {
        int i, j;
        for (i = 0, j = 5; i < j; i++, j--)
        {
            swap(arr[i], arr[j]);
        }
    }
};

int main(int argc, char const *argv[])
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    Reverse rv;
    rv.reverseArr(arr);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}
