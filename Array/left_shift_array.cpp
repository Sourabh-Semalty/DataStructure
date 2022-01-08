#include <iostream>
using namespace std;

class left_shift_array
{
private:
    int arr[5] = {1, 2, 3, 4, 5};
    int length = 5;

public:
    void leftShift(int shiftTime)
    {
        if (shiftTime > length)
        {
            cout << "Shift time length must be less than " << length;
            return;
        }
        for (int i = 0; i < shiftTime; i++)
        {
            for (int j = 0; j < length; j++)
                arr[j] = arr[j + 1];
        }
        length -= shiftTime;
    }
    void displayArr()
    {
        for (int j = 0; j < length; j++)
            cout << arr[j];
    }
};

int main(int argc, char const *argv[])
{
    left_shift_array ls;
    ls.leftShift(2);
    ls.displayArr();
    return 0;
}
