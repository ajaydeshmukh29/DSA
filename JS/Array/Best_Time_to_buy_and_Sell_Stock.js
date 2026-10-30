
let price = [7,1,5,3,6,4];
let maxProfit = 0;

for(let i = 0; i<price.length; i++)
{
  for(let j = i+i; j<price.length; j++)
  {
    let profit = price[j] - price[i];

    if(profit > maxProfit)
    {
      maxProfit = profit;
    }
  }
}
