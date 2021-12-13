#include <iostream>
using namespace std;

// The use of the template is if we need to provide the value in float , int , other primitive data type so, we don't need to create other function of if else
// ! Note it will help you do better and clean programming

template <class T>
class Airthmetic
{
private:
    T a; // using template whatever data type is will become T which is defined above
    T b;

public:
    Airthmetic(T a, T b);
    T add();
    T sub();
};

template <class T> // as we are using the scopic resolution then we need to define template again as class end above
Airthmetic<T>::Airthmetic(T n1, T n2) // In Airthmetic<T> we are using <T> as whereever we defined class name should have a template name
{
    a = n1;
    b = n2;
}
template <class T>
T Airthmetic<T>::add()
{
    return a + b;
}

template <class T>
T Airthmetic<T>::sub()
{
    return a - b;
}

int main(int argc, char const *argv[])
{
    // ! Below i  have shown two example 1 -> int 2-> float as with template we can save time and clean code too
    Airthmetic<int> a(10, 5); // Here <int> we are defining what type we want the data 
    cout << a.add() << endl;
    cout << a.sub() << endl;

    Airthmetic<float> b(10.4, 5.2);
    cout << b.add() << endl;
    cout << b.sub();

    return 0;
}

// End of the Basic concepts of c and cpp

