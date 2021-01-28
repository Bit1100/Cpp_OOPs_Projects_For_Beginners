#include <iostream>
using namespace std;

//Forward Declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};
class Complex
{
    int a, b;

public:
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);
    friend class Calculator;
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
int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setValue(2, 5);
    o1.showValue();
    o2.setValue(6, 5);
    o2.showValue();
    Calculator calc;
    cout << "The Sum of Real Part of the Complex Number is " << calc.sumRealComplex(o1, o2) << " and Imaginary Part is " << calc.sumCompComplex(o1, o2) << endl;
    return 0;
}