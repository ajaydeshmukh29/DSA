/*
 * Array - Leet Code (153)
 * Topic - Find the Minimum in Rotated Sorted Array
 * Approach 1 - Linear Search
 * Time Complexity --> O(n)
 * Space Complexity --> O(1)
*/

#include<iostream>
#include <vector>
#include<climits>

using namespace std;

class Solution 
{
  public:

  int FindMin(vector <int>& nums)
  {
    int minimum = INT_MAX;
    for(int i = 0; i<nums.size(); i++)
    {
      if(nums[i] < minimum)
      {
        minimum = nums[i];
      }
    }
    return minimum;
  }
};


int main()
{
  Solution sobj;

  vector <int> num = {3, 4, 5, 1, 2};
   int result = sobj.FindMin(num);

   cout << "Minimum Element is " << result << endl;
 
  return 0;
}