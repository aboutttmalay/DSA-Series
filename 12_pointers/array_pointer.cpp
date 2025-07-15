#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    // int *ptr = arr;
    // cout << ptr << endl;  // it print address of a[0] value .

    cout << *arr << endl; // it print value of a[0] index;

    int a =15;
    // arr = &a; // contant pointer through doesn 't change


    return 0;
}