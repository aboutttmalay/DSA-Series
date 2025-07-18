// Sum of Elements in Vector:
// Write a function to compute the sum of all vector elements.

// #include<iostream>
// #include <vector>
// using namespace std;

// int sum_vector(vector<int> nums , int n){
//     int sum =0;
//     for(int total_sum : nums){
//         sum += total_sum;
//     }
//     return sum;
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of vector : " ;
//     cin >> n;
//     vector<int> nums(n);
//     cout << "Enter the element : ";
//     for(int i=0;i<n;i++){
//         cin >> nums[i];
//     }

//     cout << "The sum of all vector element is : " << sum_vector(nums , n) << endl;

//     return 0;
// }

// Find Element:
// Check if a number exists in a vector using a loop and return its index.

// #include <iostream>
// #include <vector>
// using namespace std;
// int Find_element(vector<int> nums, int target)
// {
//     int n = nums.size();
//     for (int start = 0; start < n; start++)
//     {
//         if (target == nums[start])
//         {
//             return start;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> nums = {34, 45, 56, 67, 45, 23, 12, 45};
//     int n = nums.size();
//     int target;
//     cout << "Enter the element to find the vector : ";
//     cin >> target;
//     int index = Find_element(nums, target);

//     if (index != -1)
//     {
//         cout << "The element is found at index: " << index << endl;
//     }
//     else
//     {
//         cout << "The element is not found in the vector." << endl;
//     }

//     return 0;
// }

// Sort a Vector:
// Input n numbers into a vector and sort it using sort() from the STL.

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void sort_vector(vector<int>& nums) {
//     sort(nums.begin(), nums.end());
//     cout << "After sorting the array: ";
//     for (int val : nums) {
//         cout << val << " ";
//     }
//     cout << endl;
// }

// void print_vector(const vector<int>& nums) {
//     cout << "Before sorting the array: ";
//     for (int val : nums) {
//         cout << val << " ";
//     }
//     cout << endl;
// }

// int main() {
//     vector<int> nums {45, 23, 78, 12, 34, 56, 778, 965, 2254, 23};

//     print_vector(nums);
//     sort_vector(nums);
//     return 0;
// }

// Insert at Specific Position:
// Insert an element at a specific position in a vector.\


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> vec = {10, 20, 30, 40, 50};

//     int position, value;
//     cout << "Enter the position to insert (0-based index): ";
//     cin >> position;
//     cout << "Enter the value to insert: ";
//     cin >> value;

//     if (position < 0 || position > vec.size()) {
//         cout << "Invalid position!" << endl;
//         return 1;
//     }

//     vec.insert(vec.begin() + position, value);

//     cout << "Vector after insertion: ";
//     for (int val : vec) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

// Erase Elements:
// Erase a range of elements from a vector from position i to j.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {45, 56, 23, 78, 56, 34, 38, 67};
    int i, j;
    cout << "Enter starting index (i): ";
    cin >> i;
    cout << "Enter ending index (j): ";
    cin >> j;

    if (i < 0 || j > vec.size() || i >= j)
    {
        cout << "Invalid range!" << endl;
        return 1;
    }
    vec.erase(vec.begin() + i, vec.begin() + j);
    cout << "Vector after erasing from index " << i << " to " << j - 1 << ": ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}