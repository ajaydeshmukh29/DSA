////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application which Accept two number from user and Display the Common ON bits Position in that number 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;


UINT DisplayCONBit(UINT iNo1, UINT iNo2)
{
  UINT iMask = 0X1;
  UINT iAns1 = 0;
  UINT iAns2 = 0;
  int iCnt = 0;

  for(iCnt = 0; iCnt <= 31; iCnt++)
  {
    
    iAns1 = iMask & iNo1;
    iAns2 = iMask & iNo2;

    if((iAns1 == iMask) & (iAns2 == iMask))
    {
      printf(" %d\n",iCnt);
    }

    iMask = iMask << 1;
  }


}
int main()
{
  UINT iNum1 = 0;
  UINT iNum2 = 0;
  UINT iRet = 0;

  printf("Enter First number : \n");
  scanf("%d",&iNum1);

  printf("Enter Second number : \n");
  scanf("%d",&iNum2);

  iRet = DisplayCONBit(iNum1,iNum2);
  return 0;
}