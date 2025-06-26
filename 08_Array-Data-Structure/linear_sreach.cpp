#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int traget)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == traget)
        {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target element is not found
}
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target element to search: ";
    cin >> target;
    int result = linearSearch(arr, size, target);
    cout << "Element found at index: " << result << endl;

    return 0;
}