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

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort_vector(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    cout << "After sorting the array: ";
    for (int val : nums) {
        cout << val << " ";
    }
    cout << endl;
}

void print_vector(const vector<int>& nums) {
    cout << "Before sorting the array: ";
    for (int val : nums) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums {45, 23, 78, 12, 34, 56, 778, 965, 2254, 23};

    print_vector(nums);     
    sort_vector(nums);      
    return 0;
}
