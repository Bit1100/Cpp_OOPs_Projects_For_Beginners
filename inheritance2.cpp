#include <iostream>
using namespace std;
class Calculation
{
    int data1;

public:
    int data2;
    void setData()
    {
        data1 = 20;
        data2 = 40;
    }
    int getData1()
    {
        return data1;
    }
    int getData2()
    {
        return data2;
    }
};
class Computation : Calculation
{
    int data3;

public:
    void compute()
    {
        setData();
        data3 = data2 * getData1();
    }
    void display()
    {
        cout << "The value of data1 is " << getData1() << endl;
        cout << "The value of data2 is " << data2 << endl;
        cout << "The final data is " << data3 << endl;
    }
};
int main()
{
    Computation cmp1;
    cmp1.compute();
    cmp1.display();
    return 0;
}