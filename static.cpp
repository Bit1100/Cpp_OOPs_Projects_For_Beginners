#include <iostream>
using namespace std;
class Student
{
private:
    int id;
    static int count; // Utility Data/Static Data shared among all the objects

public:
    void getData()
    {
        cout << "Enter the ID of Student No " << count + 1 << endl;
        cin >> id;
        count++;
    }
    void showData()
    {
        cout << "The ID of the Student No " << count << " is " << id << endl;
    }
    static void totalStudents()
    {
        cout << "The total number of Students is " << count << endl;
    }
};
int Student::count;
int main()
{
    Student s[5];
    for (int i = 0; i < 3; i++)
    {
        s[i].getData();
        s[i].showData();
    }
    Student::totalStudents();
    return 0;
}