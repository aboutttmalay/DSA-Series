#include<iostream>
using namespace std;
int main()
{
    cout << "Array Creation in C++" << endl;
    int marks[5] = {56,67,45,34,23};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    // 0 to size-1
    cout << marks[5] << endl; // it will give warning that array index is out of elments...
    return 0;
}