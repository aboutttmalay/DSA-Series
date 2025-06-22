#include<iostream>
using namespace std;
int main()
{
    int a =5,b = 10;
    // cout << "sum =  " << (a + b) <<endl;
    // cout << "sub =  " << (a - b) <<endl;
    // cout << "product =  " << (a * b) <<endl;
    // cout << "division =  " << (a / b) <<endl;
    // cout << "modolo =  " << (a % b) <<endl;

    // int ans = ( 5 /(double)2);
    // cout << "ans = " << ans << endl;
    // cout << "ans = " << (5 / 2) << endl; // This will give integer division 
    
    // cout << (3 < 5) << endl; // Outputs 1 (true)
    // cout << (3 > 5) << endl; // Outputs 0 (false)
    // cout << (3 <= 5) << endl; // Outputs 1 (true)
    // cout << (3 >= 5) << endl; // Outputs 0 (false)
    // cout << (3 == 5) << endl; // Outputs 0 (false)

    cout << "a before increment: " << a << endl;
    a++;
    cout << "a after a++: " << a << endl;
    ++a;
    cout << "a after ++a: " << a << endl;

    cout << "b before decrement: " << b << endl;
    b--;
    cout << "b after b--: " << b << endl;
    --b;
    cout << "b after --b: " << b << endl;

    return 0;
}