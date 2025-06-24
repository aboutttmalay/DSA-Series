#include<iostream>
using namespace std;
int main()
{
    int a = 6,b =10;
    cout << (a&b) << endl; // Bitwise AND
    cout << (a|b) << endl; // Bitwise OR
    cout << (a^b) << endl; // Bitwise XOR
    cout << (10 << 2) << endl; // Left shift
    cout << (10 >> 1) << endl; // Right shift
    return 0; 
}