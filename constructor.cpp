#include <iostream>
#include <cmath>
using namespace std;
class Point
{
    int x, y;
    friend Point distanceFunction(Point, Point);

public:
    Point(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    void display(void)
    {
        cout << "Entered point is (" << x << "," << y << ")" << endl;
    }
};
Point distanceFunction(Point o1, Point o2)
{
    Point o3;
    float distance;
    distance = sqrt(pow((o1.x - o2.x), 2) - pow((o1.y - o2.y), 2));
    cout << "The distance between two points is " << distance << endl;
    return o3;
}
int main()
{
    Point o1(2), o2(4), o3;
    float distance;
    o1.display();
    o2.display();
    o3 = distanceFunction(o1, o2);
    return 0;
}