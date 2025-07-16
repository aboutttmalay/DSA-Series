#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> vec , int target){
    int n = vec.size();
    int start = 0,end = n-1;
    while(start <= end){
        int mid = start + (end-start) /2;

        if(target > vec[mid]){
            start = mid + 1; // 2nd half
        }
        else if (target < vec[mid]){
            end = mid - 1; // 1st half
        }
        else{
            return mid;
        }
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
    int result = binarySearch(vec,target);
    cout << "The target element " << target << " found at index vec[" << result << "]" << endl;

    return 0;
}