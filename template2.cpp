#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3 = double>
class Point
{
    T1 a;
    T2 b, c;

public:
    Point(T1 a, T2 b)
    {
        this->a = a;
        this->b = b;
    }
    T3 divide()
    {
        c = a / b;
        return c;
    }
};
int main()
{
    double result;
    Point<float> p1(5.6, 4.5);
    result = p1.divide();
    cout << "Result of division: " << result << endl;
    return 0;
}