#include <iostream>
using namespace std;
class Compare
{
private:
    static int count;
    float a, b;

public:
    void getValue()
    {
        cout << "Enter the X-Value of the Coordinate No " << count + 1 << endl;
        cin >> a;
        cout << "Enter the Y-Value of the Coordinate No " << count + 1 << endl;
        cin >> b;
        count++;
    }
    void compare(Compare ob1, Compare ob2)
    {
        if (ob1.a == ob2.a && ob1.b == ob2.b)
        {
            cout << "They have Equality Property" << endl;
        }
        else
        {
            cout << "They have Inequality Property" << endl;
        }
    }
    static void totalCoordinates()
    {
        cout << "The total mumber of Coordinates is " << count << endl;
    }
    void showValue()
    {
        cout << "Entered Ordered Pair is (" << a << "," << b << ")" << endl;
    }
};
int Compare::count;
int main()
{
    Compare o[3];
    for (int i = 0; i < 2; i++)
    {
        o[i].getValue();
        o[i].showValue();
    }
    o[2].compare(o[0], o[1]);
    Compare::totalCoordinates();
    return 0;
}