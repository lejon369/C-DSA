#include <iostream>
#include <vector>
using namespace std;

vector<int> printofSum(vector<int> nums, int sum)
{
    vector<int> ans;

    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((nums[i] + nums[j]) == sum)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans; // return immediately after finding one pair
            }
        }
    }
    return ans; // empty if no pair found
}

int main()
{
    vector<int> nums = {10, 20, 10, 40, 50, 60, 70};
    int target = 50;

    vector<int> result = printofSum(nums, target);

    if (!result.empty())
    {
        cout << "Pair found at indices: " << result[0] << " and " << result[1] << endl;
    }
    else
    {
        cout << "No pair found" << endl;
    }

    return 0;
}
