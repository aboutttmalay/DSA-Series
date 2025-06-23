#include <iostream>
using namespace std;

int Dectobinary(int Decnum)
{
    int ans = 0, pow = 1;
    while (Decnum > 0)
    {
        int rem = Decnum % 2;
        Decnum = Decnum / 2;
        ans += (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int main()
{

    int Decnum;
    cout << "Enter the Decimal Number to convert : ";
    cin >> Decnum;
    cout << "Your Binary number is : " << Dectobinary(Decnum    ) << endl;
    
    return 0;
}
