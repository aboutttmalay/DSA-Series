#include<iostream>
using namespace std;
int main()
{
    // int a =10;
    // int *ptr = &a;


    float price = 100.98;
    float *ptr  = &price;

    cout << ptr << endl;
    cout << &price << endl;

    cout << &ptr << endl;
    return 0;
}