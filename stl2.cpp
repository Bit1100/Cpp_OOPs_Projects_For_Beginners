#include <iostream>
#include <list>
using namespace std;

// Creating Iterators for displaying the entered values;
void display(list<int> &l1)
{
    int temp = 0;
    list<int>::iterator iter;
    for (iter = l1.begin(), temp = 0; iter != l1.end() || temp < 4; iter++, temp++)
    {
        cout << "Value: " << temp + 1 << " is " << *iter << endl;
    }
    cout << endl;
}
int main()
{
    // Using List of STL
    int temp;
    // Creating EMPTY List with no Elements and values
    list<int> list1;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the value: " << i + 1 << endl;
        cin >> temp;
        list1.push_back(temp);
    }
    cout << "List-Ii is: " << endl;
    display(list1);
    // Creating EMpty List with Elements but no Values
    list<int> list2(4);
    list<int>::iterator iter;
    for (iter = list2.begin(); iter != list2.end(); iter++)
    {
        cout << "Enter the Value: " << endl;
        cin >> temp;
        *iter = temp;
    }
    cout << "List-I is: " << endl;
    display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout << "Merge List is: " << endl;
    display(list1);
    return 0;
}