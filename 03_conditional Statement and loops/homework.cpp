// sum of all number form 1 to N which dividby by 3

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         if (i % 3 == 0) {
//             sum += i;
//         }
//     }
//     cout << "The sum of all numbers from 1 to " << n << " that are divisible by 3 is: " << sum << endl;
//     cout << endl;

//     return 0;
// }



// print factorial of n

#include<iostream>
using namespace std;
int main()
{
    int n, factorial = 1;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1; 
    }
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "The factorial of " << n << " is: " << factorial << endl;
    cout << endl;

    return 0;
}