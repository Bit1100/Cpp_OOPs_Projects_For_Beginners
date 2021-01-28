#include <iostream>
using namespace std;
class Binary
{
    string s;
    void checkBinary();

public:
    void read();
    void display();
    void onesCompliment();
    void reverse();
};
void Binary::checkBinary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "Please Enter the Binary Number only" << endl;
            exit(0);
        }
    }
}
void Binary::onesCompliment()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << "After Compliment" << endl;
}
void Binary::read()
{
    cout << "Enter any Binary Number:" << endl;
    cin >> s;
    checkBinary();
}
void Binary::display()
{
    cout << "The Binary Number is:" << s << endl;
}
int main()
{
    Binary bin;
    bin.read();
    bin.display();
    bin.onesCompliment();
    bin.display();
    return 0;
}