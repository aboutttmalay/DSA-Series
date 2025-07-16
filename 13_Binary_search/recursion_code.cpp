#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> vec, int target, int start, int end)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target > vec[mid])
            return binarySearch(vec, target, mid + 1, end);
        else if (target < vec[mid])
            return binarySearch(vec, target, start, mid - 1);
        else
            return mid;
    }
    return -1;
}
int main()
{
    int target;
    cout << "Enter the target element to search: ";
    cin >> target;
    vector<int> vec;
    int size;
    cout << "Enter the size of vector : ";
    cin >> size;
    cout << "Enter the element of the vector: ";
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        vec.push_back(element);
    }
    int start = 0;
    int end = vec.size() - 1;
    int result = binarySearch(vec, target, start, end);
    cout << "The target element " << target << " found at index at [" << result << "]" << endl;
    return 0;
}