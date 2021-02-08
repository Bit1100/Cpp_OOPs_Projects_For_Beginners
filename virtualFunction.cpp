#include <iostream>
using namespace std;
const float PI = 3.14;
class Polygon
{
protected:
    float radius;
    float length;
    float breadth;
    float area;

public:
    virtual void display()
    {
        cout << "The AREA of the Polygon doesn't exist" << endl;
    }
};
class Circle : public Polygon
{
public:
    void display()
    {
        cout << "Enter the Radius of the Circle " << endl;
        cin >> radius;
        area = PI * radius * radius;
        cout << "The AREA of the Circle is " << area << endl;
    }
};
class Rectangle : public Polygon
{
public:
    void display()
    {
        cout << "Enter the Length and Breadth of the Rectangle " << endl;
        cin >> length >> breadth;
        area = length * breadth;
        cout << "The AREA of the Rectangle is " << area << endl;
    }
};
class Square : public Polygon
{
public:
    void display()
    {
        cout << "Enter the Length of the Square " << endl;
        cin >> length;
        area = length * length;
        cout << "The AREA of the Square is " << area << endl;
    }
};
class Line : public Polygon
{
};
int main()
{
    int size = 4;
    Circle c1;
    Rectangle r1;
    Square s1;
    Line l1;
    Polygon *ptr[size];
    ptr[0] = &c1;
    ptr[1] = &r1;
    ptr[2] = &s1;
    ptr[3] = &l1;
    for (int i = 0; i < size; i++)
    {
        ptr[i]->display();
    }
    return 0;
}