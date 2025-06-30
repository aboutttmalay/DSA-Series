#include <iostream>
#include <limits.h> // For INT_MIN  
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of an array : ";
    cin >> size;
    int arr[size];

    cout << "Enter " << size << " of the array element : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int maximum_sum = INT_MIN; // Initialize to the smallest possible integer

    for (int start = 0; start < size; start++)
    {
        int current_sum = 0;
        for (int end = start; end < size; end++)
        {
            current_sum += arr[end];
            maximum_sum = max(current_sum, maximum_sum);
        }
    }

    cout << "The maximum subarray sum is : " << maximum_sum << endl;
    return 0;
}
