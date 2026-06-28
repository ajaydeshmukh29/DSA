////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application which Accept Number in Decimal and apply iMask and then give Updated Number 
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
  unsigned int iNo = 0;
  unsigned int iMask = 0X00400800;
  unsigned int iAns = 0;

  cout<<"Enter Number : \n";
  cin>>iNo;

  iAns = iNo ^ iMask;

  cout<<"Updated Number is : "<<iAns;

  return 0;
}