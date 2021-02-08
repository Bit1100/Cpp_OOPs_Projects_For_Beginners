#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    /* Opening the File via Constructor Method and Writing to it */
    string first_name, last_name;
    ofstream custom_cout("file1.txt");
    cout << "Enter your First Name" << endl;
    cin >> first_name;
    custom_cout << first_name << " ";
    cout << "Enter your Last Name" << endl;
    cin >> last_name;
    custom_cout << last_name;
    custom_cout.close();

    /* Reading the file word by word and line by line */
    ifstream custom_cin("file1.txt");
    string received_info;
    //Single Word
    custom_cin >> received_info;
    cout << "Input Stream Word by Word: " << received_info << endl;
    // Single Line
    getline(custom_cin, received_info);
    cout << "Input Stream Line By Line:" << received_info << endl;
    custom_cin.close();
    return 0;
}