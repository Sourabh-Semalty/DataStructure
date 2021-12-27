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
    for (int i = 0; i < this->size; i++)
        cin >> A[i];
}

void Arrayop::displayElements()
{
    cout << "Entered elements are :" << endl;
    for (int i = 0; i < size; i++)
        cout << A[i];
}

int main(int argc, char const *argv[])
{
    int s;
    cout << "Enter the size of an Array" << endl;
    cin >> s;
    Arrayop op(s, 0);

    op.insertElements();
    op.displayElements();
    return 0;
}
