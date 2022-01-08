#include <iostream>
using namespace std;

class right_shift_array
{
private:
    int arr[5] = {1, 2, 3, 4, 5};
    int length = 5;

public:
    void rightShift(int shiftTime)
    {
        if (shiftTime > length)
        {
            cout << "Shift time length must be less than " << length;
            return;
        }
        for (int i = 0; i < shiftTime; i++)
        {
            for (int j = length - 1; j > 0; j--)
                arr[j] = arr[j - 1];
        }
    }
    void displayArr()
    {
        for (int j = 2; j < length; j++)
            cout << arr[j];
    }
};

int main(int argc, char const *argv[])
{
    right_shift_array ls;
    ls.rightShift(2);
    ls.displayArr();
    return 0;
}
