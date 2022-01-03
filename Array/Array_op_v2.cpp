#include <iostream>
using namespace std;

class Array_op_v2
{
private:
    int A[8] = {45, 85, 12, 69, 45, 11, 2, 6};
    int size;
    int length;

public:
    Array_op_v2(int length, int size);
    int get(int i)
    {
        if (i > 0 && i < length)
            return A[i];
        else
            return -1;
    }
    void set(int i, int val)
    {
        if (i > 0 && i < length)
            A[i] = val;
    }
    int max()
    {
        int max = A[0];
        for (int i = 1; i < length; i++)
        {
            if (max < A[i])
                max = A[i];
        }
        return max;
    }
    int sum()
    {
        int total;
        for (int i = 0; i < length; i++)
            total += A[i];
        return total;
    }
    int avg()
    {
        int total;
        for (int i = 0; i < length; i++)
            total += A[i];
        return (total / length);
    }
};

Array_op_v2::Array_op_v2(int size, int length)
{
    this->size = size;
    this->length = length;
}

int main(int argc, char const *argv[])
{
    Array_op_v2 opv2(8, 8);
    cout << "The index value is  " << opv2.get(4) << endl;
    opv2.set(79, 0);
    cout << "The index value is has been inserted";
    cout << "The max value is  " << opv2.max() << endl;
    cout << "The sum  is  " << opv2.sum() << endl;
    cout << "The average is  " << opv2.avg() << endl;

    return 0;
}
