/*
 * Array - Leet Code 33
 * Problem - Searching Rotated sorted array 
 * Approach 1 - Binary Search approach 
 * Time Complexity --> O(logn)
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:

    int Searching(vector<int>& nums, int find)
    {
        int st = 0;
        int end = nums.size() - 1;

        while(st <= end)
        {
            int mid = st + (end - st) / 2;

            // Target found
            if(nums[mid] == find)
            {
                return mid;
            }

            // Left half is sorted
            if(nums[st] <= nums[mid])
            {
                if(find >= nums[st] && find < nums[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    st = mid + 1;
                }
            }

            // Right half is sorted
            else
            {
                if(find > nums[mid] && find <= nums[end])
                {
                    st = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }

        return -1;
    }
};

int main()
{
    Solution sobj;

    int num, find;

    cout << "Which number you want to search? ";
    cin >> find;

    cout << "Enter the Number of Elements: ";
    cin >> num;

    vector<int> arr(num);

    cout << "Enter Array Elements: ";

    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    int result = sobj.Searching(arr, find);

    cout << "Final Result (Index): " << result << endl;

    return 0;
}
