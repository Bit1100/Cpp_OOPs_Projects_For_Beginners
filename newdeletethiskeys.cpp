#include <iostream>
using namespace std;
class Mall
{
private:
    int itemNo;
    float price;

public:
    Mall &setdata(int itemNo, float price)
    {
        this->itemNo = itemNo;
        this->price = price;
        return *this;
    }
    void display()
    {
        cout << "The item no of the Product is " << itemNo << " and "
             << "the Price is Rs. " << price << endl;
    }
};
int main()
{
    int size = 3;
    int p, q;
    Mall *ptr = new Mall[size];
    // (*ptr).setdata(6, 100.5).display();
    Mall *ptr2 = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Itemno and Price of the item" << endl;
        cin >> p >> q;
        ptr->setdata(p, q).display();
        ptr++;
    }
    delete[] ptr2;
    /*
    this pointer usages
    Mall PVR;
    PVR.setdata(5, 6.5).display();
    */
    /* For Arrays */
    // int size = 3;
    // int *ptr = new int[size];
    // int *p = ptr;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter the number for the ptr[" << i << "]:" << endl;
    //     cin >> *(ptr + i);
    // }
    // delete[] ptr;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "The value of ptr[" << i << "] is " << *(p + i) << endl;
    // }

    /* For Single Integer */
    // int *ptr = new int(3);
    // cout << "The value of a is " << *ptr << endl;
    // *ptr = 4;
    // cout << "The value of a is " << *ptr << endl;
    // delete ptr;
    // cout << "The value of a is " << *ptr << endl;
    return 0;
}