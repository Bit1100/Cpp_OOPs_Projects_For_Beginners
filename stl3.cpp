#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Map is just like an object of Javascript or Python
    map<string, float> percentageMap;
    percentageMap["Suraj"] = 95.0;
    percentageMap["Jarus"] = 99.00;
    percentageMap["Manu"] = 99.99;
    percentageMap.insert({{"Bhanu", 98.45}, {"Sanu", 97.45}});

    // Map details
    cout << "The size of MAP: " << percentageMap.size() << endl;
    cout << "The max_size of MAP: " << percentageMap.max_size() << endl;
    cout << "The Emptyness of MAP: " << (bool)percentageMap.empty() << endl
         << endl;

    //Iterating through the map and displaying its contents
    map<string, float>::iterator iter;
    for (iter = percentageMap.begin(); iter != percentageMap.end(); iter++)
    {
        cout << (*iter).first << " => " << (*iter).second << "%" << endl;
    }

    return 0;
}