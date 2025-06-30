// WAF for max and min number of an array (C++ version)
#include <iostream>
using namespace std;

void maxandmin(int &max, int &min) {
    int arr[5];
    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    max = arr[0];
    min = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
}

int main() {
    int max, min;
    maxandmin(max, min);
    return 0;
}