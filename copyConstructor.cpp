#include <iostream>
using namespace std;
class Number
{
    int a;
    string m_name;

public:
    // Default Constructor
    Number()
    {
        a = 0;
    }
    // Parameterized Constructor
    Number(const string &name, int x)
    {
        a = x;
        m_name = name;
    }
    Number(const string &name)
    {
        a = 0;
        m_name = name;
    }
    // Copy Constructor
    Number(Number &obj, string name)
    {
        a = obj.a;
        m_name = name;
    }
    // Destructor
    ~Number()
    {
        cout << "Calling the Destructor " << m_name << endl;
    }
    void display()
    {
        cout << "The Object " << m_name << " has the Number " << a << endl;
    }
};
int main()
{
    Number x("x"), y("y"), z("z", 5);
    x.display();
    y.display();
    z.display();
    Number z1(z, "z1");
    z1.display();
    Number z2(z, "z2");
    z2.display();
    {
        cout << "Entering the Block" << endl;
        Number a("a"), b("b"), c("c");
        cout << "Exiting the Block" << endl;
    }
    return 0;
}