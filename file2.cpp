#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    /* Opening the File via open() Method and Writing to it */
    string first_name, middle_name, last_name;
    ofstream custom_cout;
    custom_cout.open("file2.txt");
    cout << "Enter your First Name with little Explanation" << endl;
    getline(cin, first_name);
    custom_cout << first_name << endl;
    cout << "Enter your Middle Name with little Explanation" << endl;
    getline(cin, middle_name);
    custom_cout << middle_name << endl;
    cout << "Enter your Last Name with little Explanation" << endl;
    getline(cin, last_name);
    custom_cout << last_name;
    custom_cout.close();

    /* Reading the file word by word and line by line */
    ifstream custom_cin;
    custom_cin.open("file2.txt");
    string received_info;
    //Single Word
    /*  while (custom_cin.eof() == 0)
    {
        custom_cin >> received_info;
        cout << "Input Stream Word by Word: " << received_info << endl;
    } */
    // Single Line
    while (custom_cin.eof() == 0)
    {
        getline(custom_cin, received_info);
        cout << "File Contents: Line By Line " << received_info << endl;
    }
    custom_cin.close();
    return 0;
}