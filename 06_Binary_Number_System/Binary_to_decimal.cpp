#include<iostream>
using namespace std;

int bintodec(int Decnum){
    int ans =0 ,pow = 1;
    while (Decnum > 0)
    {
        int rem = Decnum % 10; // Get the last digit (binary digit)
        Decnum = Decnum / 10; // Remove the last digit
        ans += (rem * pow); // Add to the answer
        pow = pow * 2; // Increase the power of 2
    }
    return ans; // Return the decimal equivalent
    
}

int main()
{
    int Decnum;
    cout << "Enter the Binary Number to convert : ";
    cin >> Decnum; // Input the binary number
    cout << "Your Decimal number is : " << bintodec(Decnum) << endl; // Output the decimal equivalent
    return 0;
}