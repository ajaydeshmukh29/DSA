////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept a decimal number from user, apply bitwise XOR operation with iMask,
//  and display the updated number.
//
//  iMask = 0X00000084
//  (typedef unsigned int as UINT)
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int  UINT;

int main()
{
  UINT iNo = 0;
  UINT iMask = 0X00000084;
  UINT iAns = 0;

  cout<<"Enter Number : ";
  cin>>iNo;

  iAns = iNo ^ iMask;

  cout<<"Updated Number is : "<<iAns;
  
  return 0;
}