
// to check prime number or not

// #include<iostream>
// using namespace std;

// void primenumber(int n){
//     if(n <= 1){
//         cout << n << " is not a prime number." << endl;
//         return;
//     }
//     for(int i = 2; i*i <= n; i++){
//         if(n % i == 0){
//             cout << n << " is not a prime number." << endl;
//             return;
//         }
//     }
//     cout << n << " is a prime number." << endl;
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     primenumber(num);
//     return 0;
// }   



// print all prime number 2 to n
// #include <iostream>
// using namespace std;
// void printPrimes(int n) {
//     if (n < 2) {
//         cout << "No prime numbers less than 2." << endl;
//         return;
//     }
    
//     cout << "Prime numbers from 2 to " << n << " are: ";
//     for (int i = 2; i <= n; i++) {
//         int isPrime = true;
//         for (int j = 2; j * j <= i; j++) {
//             if (i % j == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//         if (isPrime) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
    
//     printPrimes(n);
    
//     return 0;
// }


