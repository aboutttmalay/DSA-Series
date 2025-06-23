// calculate the sum of digit of a number

// #include <iostream>
// using namespace std;

// int SumofDigit(int n)
// {
//     int digsum = 0;
//     while (n > 0)
//     {
//         int lastdig = n % 10;
//         n /= 10;
//         digsum += lastdig;
//     }
//     return digsum;
// }

// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "Sum of digit is: " << SumofDigit(n) << endl;
//     return 0;
// }


// calculate nCr binomial coefficient for n & r

#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int binomial(int n, int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);

    return fact_n / (fact_r * fact_nmr);
}

int main() {
    int n, r;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the r: ";
    cin >> r;

    cout << "Binomial Coefficient (nCr): " << binomial(n, r) << endl;
    return 0;
}
 