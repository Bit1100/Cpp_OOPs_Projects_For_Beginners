#include <iostream>
using namespace std;
class Complex
{
    int a, b;
    friend Complex Substract(Complex, Complex); //ProtoType

public:
    void setValue(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void showValue()
    {
        cout << "The value of the Complex Number is " << a << " + " << b << "i" << endl;
    }
};
Complex Substract(Complex o1, Complex o2)
{
    Complex o3;
    o3.setValue((o1.a - o2.a), (o1.b - o2.b));
    return o3;
}
int main()
{
    Complex o1, o2, minus;
    o1.setValue(3, 8);
    o1.showValue();
    o2.setValue(5, 8);
    o2.showValue();
    minus = Substract(o1, o2);
    minus.showValue();
    return 0;
}