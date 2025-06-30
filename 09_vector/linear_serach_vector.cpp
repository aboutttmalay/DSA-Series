#include<iostream>
#include <vector>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target element is not found
}
int main()
{
    vector<int> vec;
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;
    cout << "Enter the elements of the vector: ";       
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        vec.push_back(element); // Add elements to the vector
    }
    int target;
    cout << "Enter the target element to search: ";
    cin >> target;
    int result = linearSearch(vec.data(), size, target); // Use vec.data() to get the underlying array
    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the vector." << endl;
    }
    return 0;
}