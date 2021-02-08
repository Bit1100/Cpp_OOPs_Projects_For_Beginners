#include <iostream>
using namespace std;
/* Abstract Class -> cannot be instantiated */
class Polygon
{
protected:
    const float PI = 3.14;
    float radius;
    float length;
    float breadth;
    float area;

public:
    /* Virtual Function */
    virtual void calc(){};
    /* Pure Virtual Functions */
    virtual void display() = 0;
};
class Circle : public Polygon
{
public:
    void calc()
    {
        cout << "Enter the Radius of the Circle " << endl;
        cin >> radius;
        area = PI * radius * radius;
    }
    void display()
    {
        cout << "The AREA of the Circle is " << area << endl;
    }
};
class Rectangle : public Polygon
{
public:
    void calc()
    {
        cout << "Enter the lenght and breadth of the Rectangle " << endl;
        cin >> length >> breadth;
        area = length * breadth;
    }
    void display()
    {
        cout << "The AREA of the Rectangle is " << area << endl;
    }
};
class Square : public Polygon
{
public:
    void calc()
    {
        cout << "Enter the length of the Square " << endl;
        cin >> length;
        area = length * length;
    }
    void display()
    {
        cout << "The AREA of the Square is " << area << endl;
    }
};
class Line : public Polygon
{
public:
    void display()
    {
        cout << "Area of the Line Doesn't Exist" << endl;
    }
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
        ptr[i]->calc();
    }
    cout << "Let's the Display the Area if it Exits" << endl;
    for (int i = 0; i < size; i++)
    {
        ptr[i]->display();
    }
    return 0;
}