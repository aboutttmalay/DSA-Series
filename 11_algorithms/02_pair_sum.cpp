// the optimal solution

#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the element: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    int target;
    cout << "Enter target sum: ";
    cin >> target;

    vector<int> ans = PairSum(nums, target);
    cout << ans[0] << " , " << ans[1] << endl; 

    return 0;
}