#include <iostream>
#include <string>
using namespace std;
class Foo
{
public:
    Foo(const string &name)
    {
        m_name = name;
    }
    void Print()
    {
        cout << "Instance name = " << m_name << endl;
    }

private:
    string m_name;
};

int main()
{
    Foo a("a");
    Foo b("b");

    a.Print();
    b.Print();

    return 0;
}
