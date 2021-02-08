#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class BaseCalculator
{
protected:
    int num1;
    int num2;

public:
    void getNumber()
    {
        cout << "Enter the First Number " << endl;
        cin >> num1;
        cout << "Enter the Second Number " << endl;
        cin >> num2;
    }
};
class SimpleCalculator : virtual public BaseCalculator
{

public:
    void displaySimpleCalc()
    {
        cout << "Operation Related to the Simple Calculator" << endl
             << "The sum of two numbers: " << num1 + num2 << endl
             << "The difference of two numbers: " << num1 - num2 << endl
             << "The product of two numbers: " << num1 * num2 << endl
             << "The divide of two numbers: " << num1 / num2 << endl
             << endl;
    }
};
class ScientificCalculator : virtual public BaseCalculator
{
public:
    void displayScientificCalc()
    {
        cout << "Operation Related to the Scientific Calculator" << endl
             << "The square root  of 1st & second number is: " << sqrt(num1) << setw(10) << sqrt(num2) << endl
             << "The power of num1 to the num2 is: " << pow(num1, num2) << endl
             << "The sine of 1st & 2nd number is " << sin(num1) << setw(10) << sin(num2) << endl
             << "The rounding up of 1st & 2nd number is " << ceil(num1) << setw(5) << ceil(num2) << endl
             << "The rounding down of 1st & 2nd number is " << floor(num1) << setw(5) << floor(num2) << endl;
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};
int main()
{
    HybridCalculator calc;
    calc.getNumber();
    calc.displaySimpleCalc();
    calc.displayScientificCalc();
    return 0;
}