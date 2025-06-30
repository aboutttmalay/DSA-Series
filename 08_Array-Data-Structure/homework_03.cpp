// WAF to print all the uqiue values array 

#include<iostream>
using namespace std;

void printUniqueValues(int arr[], int size) {
    bool isUnique;
    cout << "Unique values in the array: ";
    for (int i = 0; i < size; i++) {
        isUnique = true;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
int main()
{
    int size;
    cout << "Enter the size of the array: ";    
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    printUniqueValues(arr, size);
    cout << "All unique values have been printed." << endl;
    return 0;
}