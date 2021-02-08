#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;
    string name;
    void display_roll_no(void)
    {
        cout << name << ", your Roll No is: " << roll_no << endl;
    }

public:
    Student() {}
    Student(int roll, const string &sname)
    {
        roll_no = roll;
        name = sname;
        cout << "Virtual Class Constructor Called" << endl;
    }
};
class Test : public virtual Student
{
protected:
    float marks1, marks2;
    void display_marks()
    {
        cout << name << ", your Marks1 is: " << marks1 << endl;
        cout << name << ", your Marks2 is: " << marks2 << endl;
    }

public:
    Test() {}
    Test(float m1, float m2)
    {
        marks1 = m1;
        marks2 = m2;
        cout << "Test Constructor Called" << endl;
    }
};
class ExtraCurriculum : virtual public Student
{
protected:
    float score;
    void display_score()
    {
        cout << name << ", your Score is: " << score << endl;
    }

public:
    ExtraCurriculum() {}
    ExtraCurriculum(float s)
    {
        score = s;
        cout << "ExtraCurriculum Constructor Called" << endl;
    }
};
class Result : public Test, public ExtraCurriculum
{
protected:
    float total;
    float percentage;

public:
    Result() {}
    Result(int roll, const string &sname, float m1, float m2, float score) : Test(m1, m2), ExtraCurriculum(score), Student(roll, sname)
    {
        total = 0;
        percentage = 0;
        cout << "Result Constructor Called" << endl;
    }
    void show()
    {
        total = marks1 + marks2 + score;
        percentage = (total / 2);
        display_roll_no();
        display_marks();
        display_score();
        cout << name << ", your Grand Total Result is: " << total << endl;
        cout << name << ", your Grand Total Result is: " << percentage << "%" << endl;
    }
};
int main()
{
    Result suraj(5, "Suraj", 95, 98.5, 8.5);
    suraj.show();
    return 0;
}