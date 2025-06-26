// WAF to calculate sum & product of all numbers in an array.

#include <iostream>
using namespace std;

// Function to calculate the sum and product of all elements in an array
void sumandproduct(int arr[], int size, int &sum, int &product)
{
    sum = 0;
    product = 1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
}

int main()
{
    int size;
    cout << "Enter the size of array elment: ";
    cin >> size;
    int arr[size];
    int sum,product;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sumandproduct(arr, size, sum, product);
    cout << "Sum of all elements: " << sum << endl;
    cout << "Product of all elements: " << product << endl; 
    return 0;
}