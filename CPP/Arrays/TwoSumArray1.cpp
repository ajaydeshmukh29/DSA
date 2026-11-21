/*
 * Array - Leet Code
 * Topic : Two Sum Array
 * Approach 1: Brut force   -> Time Complexity o(n^2)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    cout<<"[" << i <<", "<< j << "]";
                    return {};
                }
            }
        }
        return {};
    }
};

int main()
{
    Solution sobj;

    int target = 9;
    vector<int> arr = {2, 7, 11, 15};

    vector<int> result = sobj.twoSum(arr, target);

    return 0;
}