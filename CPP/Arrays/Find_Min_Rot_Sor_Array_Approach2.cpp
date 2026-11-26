/*
 * Array - Leet Code (153)
 * Topic - Find the Minimum in Rotated Sorted Array
 * Approach 2 - Binary Search
 * Time Complexity --> O(n)
 * Space Complexity --> O(logn)
*/


#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:

    int FindMin(vector<int>& nums)
    {
        int st = 0;
        int end = nums.size() - 1;

        while(st < end)
        {
            int mid = st + (end - st) / 2;

            if(nums[mid] > nums[end])
            {
                st = mid + 1;
            }
            else
            {
              end = mid;
            }
        }

        return nums[st];
    }
};

int main()
{
    Solution sobj;

    vector<int> nums = {3, 4, 5, 1, 2};

    int result = sobj.FindMin(nums);

    cout << "Minimum Element: " << result << endl;

    return 0;
}
