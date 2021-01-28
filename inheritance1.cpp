#include <iostream>
using namespace std;
class Person
{
    string name;

public:
    void setName(string username)
    {
        name = username;
    }
    string getName(void)
    {
        return name;
    }
    void display()
    {
        cout << "Hello " << name << endl;
    }
};
class Student : public Person
{
    int id;

public:
    Student(int roll_no)
    {
        id = roll_no;
    }
    void displayData()
    {
        cout << "Hey " << getName() << " Good News for you and the news is that you have been selected for the IIT/JEE and your alloted ID number is " << id << endl;
    }
};
int main()
{
    Student s1(20);
    s1.setName("Suraj");
    s1.displayData();
    return 0;
}