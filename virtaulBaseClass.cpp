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
    void set_number(int roll, const string &sname)
    {
        roll_no = roll;
        name = sname;
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
    void set_marks(float m1, float m2)
    {
        marks1 = m1;
        marks2 = m2;
    }
};
class ExtraCurriculum : virtual public Student
{
protected:
    int score;
    void display_score()
    {
        cout << name << ", your Score is: " << score << endl;
    }

public:
    void set_score(int s)
    {
        score = s;
    }
};
class Result : public Test, public ExtraCurriculum
{
protected:
    float total;
    float percentage;

public:
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
    Result suraj;
    suraj.set_number(1, "Suraj");
    suraj.set_marks(95.5, 89.5);
    suraj.set_score(6);
    suraj.show();
    return 0;
}