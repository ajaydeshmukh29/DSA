/////////////////////////////////////////////////////////////
//
//  Application which Check the 4 th bit is ON or OFF
//
/////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
  int iNo = 0;
  int iMask = 8;
  int iAns = 0;

  printf("Enter Number : ");
  scanf("%d",&iNo);

  iAns = iNo & iMask;

  if(iAns == iMask)
  {
    printf("4th Bit is ON\n");
  }
  else
  {
    printf("4th Bit is OFF");
  }

  return 0;
}
