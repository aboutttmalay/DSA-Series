#include <iostream>
using namespace std;

// Function to check if n is a power of 2
bool isPowerOfTwo(int n) {
    // A number is a power of 2 if n > 0 and (n & (n-1)) == 0
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerOfTwo(num)) {
        cout << num << " is a power of 2." << endl;
    } else {
        cout << num << " is NOT a power of 2." << endl;
    }
    return 0;
}

