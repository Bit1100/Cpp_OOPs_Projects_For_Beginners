#include <iostream>
using namespace std;
// Function Overloading
void display(int a)
{
    cout << "Value: " << a << endl;
}
/*
void display(char a)
{
    cout << "Value: " << a << endl;
}
void display(float a)
{
    cout << "Value: " << a << endl;
}
void display(double a)
{
    cout << "Value: " << a << endl;
} */
// Template Function is powerful than Function Overloading
// Template Function with default parameter
template <class T = int>
void display(T a)
{
    cout << "Template Value: " << a << endl;
}
int main()
{
    // Both with or without explicit mention of datatypw in case of function work the same
    display(5);
    // Here display(5) function is preferred rather than the template function
    display<int>(5);
    display('c');
    display<char>('c');
    display(4.5f);
    display<float>(4.5f);
    display(4.5);
    display<double>(4.5);
    return 0;
}