#include <iostream>
using namespace std;
// Template for a Class with default Value
template <class T = int>

// Vector Class
class Vector
{
    T *arr;
    int size;

public:
    Vector(int);
    void setdata(T, T, T);
    T dotProduct(Vector &);
};

// Class Methods
template <class T>
Vector<T>::Vector(int size)
{
    this->size = size;
    arr = new T[size];
}
template <class T>
void Vector<T>::setdata(T a, T b, T c)
{
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
}
template <class T>
T Vector<T>::dotProduct(Vector &other)
{
    T dP = 0;
    for (int i = 0; i < size; i++)
    {
        dP += this->arr[i] * other.arr[i];
    }
    return dP;
}
int main()
{
    int result;
    Vector<float> v1(3), v2(3);
    v1.setdata(1, 0, 1);
    v2.setdata(0, 1, 1);
    result = v1.dotProduct(v2);
    cout << "The value of dot product is:" << result << endl;
    return 0;
}