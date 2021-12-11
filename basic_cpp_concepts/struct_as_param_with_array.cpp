#include <iostream>

// * Note we can send the strucutre as call by value even if contain array
// * Array cannot be send by call by value
// * as doing this we are coping the whole value which actually a time consuming process
struct arrayStructure
{
    int arr[5];
    int a;
};

void printData(struct arrayStructure r) {
    std::cout << "The value of a is " << r.a << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "The value at index " << i << " is " << r.arr[i] << std::endl;
    }
    
}
int main(int argc, char const *argv[])
{
    struct arrayStructure r = {{1,2,3,4,5}, 5};
    printData(r);
    return 0;
}
