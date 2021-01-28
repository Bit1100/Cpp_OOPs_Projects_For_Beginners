#include <iostream>
using namespace std;
class Y;
class X
{
    int numX;

public:
    friend void swap(X &, Y &);
    void setValue(int a)
    {
        numX = a;
    }
    void display()
    {
        cout << "X value is " << numX << endl;
    }
};
class Y
{
    int numY;
    friend void swap(X &, Y &);

public:
    void setValue(int a)
    {
        numY = a;
    }
    void display()
    {
        cout << "Y value is " << numY << endl;
    }
};
void swap(X &x, Y &y)
{
    int temp = x.numX;
    x.numX = y.numY;
    y.numY = temp;
}
int main()
{
    X x;
    x.setValue(5);
    Y y;
    y.setValue(3);
    cout << "Before Swapping" << endl;
    x.display();
    y.display();
    swap(x, y);
    cout << "After Swapping" << endl;
    x.display();
    y.display();
    return 0;
}