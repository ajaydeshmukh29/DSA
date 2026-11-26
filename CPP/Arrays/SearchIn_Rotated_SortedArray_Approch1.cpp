/*
 * Array - Leet Code 33
 * Problem - Searching Rotated sorted array 
 * Approach 1 - Brut force approach
 * Time Complexity --> O(n)
*/


#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:

    int Searching(vector<int>& nums, int target)
    {
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target)
            {
                return i;
            }
        }

        return -1;
    }
};

int main()
{
    Solution sobj;

    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    int target = 0;

    int result = sobj.Searching(nums, target);

    cout << "Target Index: " << result << endl;

    return 0;
}

