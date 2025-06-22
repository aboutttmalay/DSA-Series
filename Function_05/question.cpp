// sum of number is 1 to n
#include <iostream>
using namespace std;

// int sumN(int n)
// {
//     int sum = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }
// int main()
// {
//     cout << "sum = " << sumN(5) << endl; 
//     return 0;
// }


// n factorial

#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    cout << "Enter the number: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    return fact;
}
int main()
{
    cout << "The factorial of number is : " << factorial(6) << endl;
    return 0;
}