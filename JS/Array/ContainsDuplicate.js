// Array - Application which check the duplicate element in the Array

let nums = [1,2,3,1,]
let target = 9;

for(let i = 0; i<nums; i++)
{
  for(let j = 0; j<nums; j++)
  {
    if(nums[i] == nums[j] == target)
    {
      console.log(nums[i])
    }
  }
}