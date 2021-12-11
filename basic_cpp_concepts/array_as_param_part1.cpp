#include<iostream>

// ! Note array can only be passed by address ...
// Using array as parameter means we are sending the whole array in a param to a function created somewhere
void printArr(int a[],int size) { // here displaying a[] means we are specifically defining that it contain only array // ! But we can also use pointer also which can work as array or integer 
    for (int i = 0; i < size; i++) std::cout << "The index of " << i  << " value is  = " << a[i] << std::endl;
}

// pointer example
void pointArrWithPointer(int *a, int size) { // a is denoting the address of arr[0] and *a denoting the value of arr[0]
    for(int i=0;i<size;i++) {
        std::cout << "The index of " << i  << " value is  = " << *a << std::endl; 
        a++;
    }
}

int main(int argc, char const *argv[])
{
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArr(arr,size); // here we are sending arr which actually means we are sending the address of arr[0] default
    
    pointArrWithPointer(arr,size);
    return 0;
}
