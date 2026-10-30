/*
Topic - Array 
  Two Sum Array (Leet Code)
  
LeetCode Problem Number 1
Problem Statement : You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

Example 1:
Input : nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation:
The sum of nums[0] and nums[1] is 2 + 7 = 9, which equals the target. Therefore, the indices [0, 1] are returned.

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2] 

*/

import java.util.Arrays;

class Solution
{
  public int[] twoSum(int[] nums, int target)
  {
    for(int i = 0; i<nums.length; i++)
    {
      for(int j = 0; j<nums.length; j++)
      {
        if(nums[i] + nums[j] == target)
        {
          return new int[]{i,j};
        }
      }
    }
    return new int[]{};
  }
}

class TwoSum 
{
  public static void main(String A[])
  {
    Solution sobj = new Solution();

    int target = 9;
    int Arr[] = {2,7,11,15};

    int[] result = sobj.twoSum(Arr, target);

    System.out.println(Arrays.toString(result));
  }
}
