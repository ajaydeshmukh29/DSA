// Array - 
// Max Sub Array - (Leet Code)

//Given an integer array nums, find the contiguous subarray with the largest sum and return that sum.

let nums = [1,2,45,42,6];

let max = Number.NEGATIVE_INFINITY;

for(let i = 0; i<nums.length; i++)
{
  let sum = 0;

  for(let j = 0; j<nums.length; j++)
  {
    if(sum > max)
    {
      sum = sum + nums[j];
    }
  }
  console.log(sum)
  return;
}