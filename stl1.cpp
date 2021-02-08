#include <iostream>
#include <vector>

using namespace std;

template <class T = int>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << endl;
    }
}
int main()
{
    int temp;
    vector<int> v1;
    vector<char> v2;
    vector<float> v3;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the Value: " << endl;
        cin >> temp;
        v1.push_back(temp);
        v2.push_back(temp);
        v3.push_back(temp);
    }
    cout << "Before INSERTION, Display for Int Vector " << endl;
    display(v1);
    vector<int>::iterator iter = v1.begin();
    v1.insert(iter + 1, 1, 100);
    cout << "AFTER INSERTION, Display for Int Vector " << endl;
    display(v1);
    cout << "Display for Char Vector" << endl;
    display(v2);
    cout << "Display for Float Vector" << endl;
    display(v3);

    return 0;
}