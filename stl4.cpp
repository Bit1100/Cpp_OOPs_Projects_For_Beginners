#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {55, 1, 45, 12, 18};
    // Function Objects -> Functor greater<int>()
    sort(arr, arr + 5, greater<int>());
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}