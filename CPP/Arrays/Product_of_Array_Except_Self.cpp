/*
 * Array - Leet Code (238)
 * Array Topic - Product of Array except self (For Index, multiply all array elements except the element at that index)
 * Approach 1 : Brute-force approach
 * TIme Complexity -> O(n^2)
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution
{
  public:
  vector <int> ProductofArr(vector <int> nums)
  {
    for(int i = 0; i<nums.size(); i++)
    {
      int prodcut = 1;
      for(int j = 0; j<nums.size(); j++)
      {
        if(i != j)
        {
          prodcut = prodcut * nums[j];
        }
      }
      cout<<prodcut<< endl;
    }
  }

};

int main()
{
  Solution sobj;
  vector <int> nums = {1, 2, 3, 4};
  vector <int> result = sobj.ProductofArr(nums);

  return 0;
}