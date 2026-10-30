// Array - Two Sum array

let nums = [1,2,3,4]
let target = 9


for(let i = 0; i <= nums.length; i++)
{
  for(let j = i+1; j < nums.length; j++)
  {
    if(nums[i] + nums[j] == target)
    {
      console.log(nums[i,j])
    }
  }
}