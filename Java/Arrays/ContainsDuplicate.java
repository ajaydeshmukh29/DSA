// Topic - Array
//  Contains Duplicate element  (Leet Code)

/*
 Application which diplay the Duplicate element in the array using Java.

  Q.1
  Input: nums = [1, 2, 3, 1]
  Output: true

  Q.2
  Input: nums = [1, 2, 3, 4]
  Output: false
*/

class Solution
{
  public boolean containsDuplicate(int nums[])
  {
    for(int i = 0; i < nums.length; i++)
    {
      for(int j = i + 1; j < nums.length; j++)
      {
        if(nums[i] == nums[j])
        {
          return true;
        }
      }
    }
    return false; 
  }

public static void main(String A[])
{
  Solution sobj = new Solution();
  
  int nums[] = {1, 2, 3, 1};
  boolean result = sobj.containsDuplicate(nums);

  System.out.println(result);
  }
}
