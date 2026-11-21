/*
 * Array - Leet Code
 * Topic : Two Sum Array
 * Approach 2: Hash map     -> Time Complexity o(n)
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> seen;  // value -> index
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (seen.count(complement))
            {
                return {seen[complement], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};
