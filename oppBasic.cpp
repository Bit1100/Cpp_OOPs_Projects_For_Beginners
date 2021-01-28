#include <iostream>
using namespace std;
class Display
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a, int b, int c);
    void showData()
    {
        cout << "The value of a is:" << a << endl;
        cout << "The value of b is:" << b << endl;
        cout << "The value of c is:" << c << endl;
        cout << "The value of d is:" << d << endl;
        cout << "The value of e is:" << e << endl;
    }
};
void Display::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Display obj1;
    obj1.d = 7;
    obj1.e = 3;
    obj1.setData(1, 5, 8);
    obj1.showData();
    return 0;
}