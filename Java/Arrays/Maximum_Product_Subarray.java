/*
  * Array - (Leet Code)
  * Topic - Maximum of Product of Subarray
  * Time Complexity -> O(n^2)
*/

class Solution
{
  public int maxProduct(int nums[])
  {
    int maxProduct = Integer.MIN_VALUE;

    for(int i=0; i<nums.length; i++)
    {
      int product = 1;

      for(int j = 0; j<nums.length; j++)
      {
        product = product * nums[j];

        if(product > maxProduct)
        {
          maxProduct = product;   
        }
      }
    }
    return maxProduct;
  }
}

class Maximum_Product_Subarray
{
  public static void main(String[] A)
  {
    int num[] = {2, 3, -2, 4};

    Solution sobj = new Solution();

    System.out.println(sobj.maxProduct(num));
  }
}

// Time Complexity -> O(n^2)