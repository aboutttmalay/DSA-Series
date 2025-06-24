// WAF to reverse an Integer n.

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a  number to reverse : ";
    int n;
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        int r = n % 10;
        sum = sum * 10 + r;
        n /= 10;
    }
    cout << "Reversed number is : " << sum << endl;
    return 0;
    
}