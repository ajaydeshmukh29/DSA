#include<iostream>
#include<vector>

using namespace std;

class Solution
{
  public:

  vector<int> maxSubArray(vector <int> nums)
  {
    int maxProduct = INT8_MIN;

    for(int i = 0; i<nums.size(); i++)
    {
      int prodcut = 1;

      for(int j = 0; j<nums.size(); j++)
      {
        prodcut = prodcut * nums[j];

        if(prodcut > maxProduct)
        {
          maxProduct = prodcut;
        }
      }
    }
  }
};

int main()
{
  Solution sobj;

  vector<int> nums ={2, 3, -2, 4};

  vector<int> result = sobj.maxSubArray(nums);

  return 0;
}