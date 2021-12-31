#include <iostream>
using namespace std;

class Binary_search
{
private:
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

public:
    int searchBinaryNormal(int, int, int);
    int searchBinaryRecur(int, int, int);
};
int Binary_search::searchBinaryRecur(int key, int high, int low)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (A[mid] == key)
        return mid;
    else if (key < A[mid])
        return searchBinaryRecur(key, mid - 1, low);
    else
        return searchBinaryRecur(key, high, mid + 1);
}
int Binary_search::searchBinaryNormal(int key, int high, int low)
{
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2; // getting mid of the array
        // * suppose we get the element in the first try then,
        if (key == A[mid])
            return mid;
        // * but if we won't get it then we should check the key is less than mid of greater than mid
        // * if the key is less than mid than make the high to  mid - 1 because the element is present in less than mid range
        else if (key < A[mid])
            high = mid - 1;
        // * if the key is greater than incerase the low to mid + 1
        else if (key > A[mid])
            low = low + 1;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    Binary_search bn;
    // int index = bn.searchBinaryNormal(5, 9, 0);
    // string location = index == -1 ? "Not found" : "Found";
    // cout << location << endl;

    cout << bn.searchBinaryRecur(10, 9, 0);
    return 0;
}
