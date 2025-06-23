#include <iostream>
using namespace std;

// Function Syntax
int printHello()
{
    cout << "Hello , Malay Joshi..";
    return 3;
}
int main()
{

    // functrion call // invoke
    // printHello();
    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // for (int i = 0; i <= n; i++)
    // {
    //     printHello();
    // }
    // cout << endl;
    int value = printHello();
    cout << "Value of numbewr is : " << value << endl;
    return 0;
}