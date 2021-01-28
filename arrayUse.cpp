#include <iostream>
using namespace std;
class Shop
{
private:
    int itemNo[100], counter = 0, grandTotal = 0;
    float itemPrice[100];

public:
    void initCounter()
    {
        counter = 0;
    }
    void setData(void)
    {
        cout << "Enter the ItemNo of the Product" << endl;
        cin >> itemNo[counter];
        cout << "Enter the Price of Item Number-" << itemNo[counter] << endl;
        cin >> itemPrice[counter];
        counter++;
    }
    void displayData()
    {
        for (int i = 0; i < counter; i++)
        {
            grandTotal += itemPrice[i];
            cout << "The Price of Item No " << itemNo[i] << " is " << itemPrice[i] << endl;
        }
    }
    void grandTotalPrice()
    {
        cout << "The Grand Total of all the products is " << grandTotal << endl;
    }
};
int main()
{
    Shop shop1;
    shop1.initCounter();
    shop1.setData();
    shop1.setData();
    shop1.displayData();
    shop1.grandTotalPrice();
    return 0;
}