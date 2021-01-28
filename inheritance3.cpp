#include <iostream>
using namespace std;
class Animal
{
private:
    int legs;

protected:
    bool domestic;

public:
    bool haveHump;
    Animal()
    {
        domestic = 1;
    }
    Animal(int foot)
    {
        legs = foot;
    }
    void display()
    {
        cout << legs << endl;
    }
};
class Mammal : protected Animal
{
public:
    Mammal()
    {
        haveHump = true;
    }
    void display()
    {
        cout << domestic << endl;
        cout << haveHump << endl;
    }
};
int main()
{
    Animal animal1(4);
    animal1.display();
    Mammal cow;
    cow.display();
    return 0;
}