/*
  * Array - Leet Code (152)
  * Topic - Maximum of Product of Subarray
  * Time Complexity -> O(n^2)
  * A Maximum Subarray means finding a continuous group of elements in an array whose multiplication give the largest possible product.
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> nums)
    {
        int maxProduct = INT_MIN;

        for(int i = 0; i < nums.size(); i++)
        {
            int product = 1;

            for(int j = i; j < nums.size(); j++)
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
};

int main()
{
    Solution sobj;

    vector<int> nums = {2, 3, -2, 4};

    int result = sobj.maxProduct(nums);

    cout << "Maximum Product: " << result << endl;

    return 0;
}
