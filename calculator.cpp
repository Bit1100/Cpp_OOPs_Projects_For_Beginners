#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
private:
    int num1;
    int num2;

protected:
    void getNumber(void)
    {
        cout << "First Number is " << num1 << endl;
        cout << "Second Number is " << num2 << endl;
    }

public:
    void setNumber(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    int add()
    {
        return num1 + num2;
    }
    int sunum2trnum1ct()
    {
        return num1 - num2;
    }
    int multiply()
    {
        return num1 * num2;
    }
    double divide()
    {
        return num1 / num2;
    }
};
class ScientificCalculator
{
public:
    float sqrt(int a)
    {
        return sqrt(a);
    }
    int power(int a, int b)
    {
        return pow(a, b);
    }
    float sine(int a)
    {
        return sin(a);
    }
    int roundDown(float a)
    {
        return floor(a);
    }
    int roundUp(float a)
    {
        return ceil(a);
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void display()
    {
        getNumber();
        cout << "The Result of the Calculation is ";
    }
};
int main()
{
    HybridCalculator op1;
    op1.setNumber(4, 2);
    op1.display();
    cout << op1.add() << endl;
    op1.display();
    cout << op1.roundUp(6.5) << endl;
    return 0;
}