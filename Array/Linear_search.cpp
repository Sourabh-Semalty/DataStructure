#include <iostream>
using namespace std;

class LinearSearch
{
private:
    int A[6] = {1, 2, 3, 4, 5, 6};
    int length = 6;

public:
    string MoveToHeadSearch(int key) { // here in Move to head method we are swaping the found element to first index so, if repeadly calling then the next time we will get the element in constant time
        for(int i=0;i<length;i++) {
            if(A[i] == key) {
                swap(A[i], A[0]);
                return "found";
            }
        }
        return "Not found";
    }

    string TranspoisitionSearch(int key) { // here in transpoisition we are swapping the found element with the previous element so, if it calls repeadly we have high chance to get the element in constant time to
        for(int i=0;i<length;i++) {
            if(A[i] == key) {
                swap(A[i], A[i-1]);
                return "found";
            }
        }
        return "Not found";
    }
    string search(int key)
    {
        for (int i = 0; i < length; i++)
        {   
            if(key == A[i]) return "found"; 
        }
        return "Not found";
    }
};

int main(int argc, char const *argv[])
{
    LinearSearch ls;
    cout << ls.search(3) << endl;
    cout << ls.TranspoisitionSearch(3) << endl;
    return 0;
}
