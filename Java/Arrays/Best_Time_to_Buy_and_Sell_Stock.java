// Array - 
// Application program which give the Best Time to Buy and Sell Stock

class Solution
{
  public int maxProfit(int[] price)
  {
    int maxProfit = 0;

    for(int i = 0; i < price.length; i++)
    {
      for(int j = i+1; j < price.length; j++)
      {
        int profit = price[j] - price[i];

        if(profit > maxProfit)
        {
          maxProfit = profit;
        }
      }
    }
    return maxProfit;
  }

  public static void main(String[] A)
  {
    int price[] = {7,1,5,3,6,4};    //6

    Solution obj = new Solution();

    System.out.println(obj.maxProfit(price));
  }
}