////////////////////////////////////////////////////////
//
//  Printing Number Decimal to Binary 
//
/////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
  int iNo = 0;
  int iDigit = 0;

  printf("Enter Decimal Number : ");
  scanf("%d",&iNo);

  printf("Binary Number is : ");
  while(iNo != 0)
  {
    iDigit = iNo % 2;
    printf("%d",iDigit);
    iNo = iNo / 2;
  }
  return 0;
}