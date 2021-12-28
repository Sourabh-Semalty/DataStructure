#include <iostream>
using namespace std;

class Arrayop
{
private:
    int *A;
    int size;
    int length;

public:
    Arrayop(int size, int length);
    void insertElements();
    void displayElements();
    void freeMemory();
    int getLength();
    void insertAtindex(int index, int value);
    void deletefromindex(int index);
};

Arrayop::Arrayop(int size, int length)
{
    A = new int[size];
    this->size = size;
    this->length = length;
}

void Arrayop::insertElements()
{
    cout << "Enter all the elements" << endl;
    for (int i = 0; i < this->size - 2; i++)
    {
        cin >> A[i];
        this->length += 1;
    }
}

void Arrayop::displayElements()
{
    cout << "Entered elements are :" << endl;
    for (int i = 0; i < length; i++)
        cout << A[i] << "\t";
    cout << endl;
}

void Arrayop::freeMemory() { delete[] A; }

int Arrayop::getLength() { return length; }

void Arrayop::insertAtindex(int index, int val)
{
    // check if array is full
    if (index > length)
        cout << endl
             << "Index is not valid";
    else if (index == size)
        cout << endl
             << "Array is full";
    else
    {
        for (int i = this->length; i >= index; i--)
        {
            A[i + 1] = A[i];
        }
        A[index] = val;
        this->length++;
    }
}

void Arrayop::deletefromindex(int index)
{
    if (index < 0)
        cout << endl
             << "index must be greater than -1" << endl;
    else if (index > length)
        cout << endl
             << "Nothing in this index" << endl;
    else
    {
        for (int i = index; i < length; i++)
        {
            A[i] = A[i + 1];
        }
        this->length--;
    }
}

int main(int argc, char const *argv[])
{
    int s;
    cout << "Enter the size of an Array" << endl;
    cin >> s;
    Arrayop op(s, 0);

    op.insertElements();
    op.displayElements();
    cout << endl
         << "The length of an array is " << op.getLength() << endl;

    op.insertAtindex(3, 45);
    op.displayElements();

    op.deletefromindex(0);
    op.displayElements();

    op.freeMemory();
    return 0;
}
