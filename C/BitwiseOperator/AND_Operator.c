//////////////////////
//
//  And Opertor 
//
////////////////////


#include<stdio.h>

int main()
{
  int No1 = 0, No2 = 0, Ans = 0;

  printf("Enter First Number : ");
  scanf("%d",&No1);

  printf("Enter Second Number : ");
  scanf("%d",&No2);

  Ans = No1 & No2;

  printf("Result is : %d",Ans);
  return 0;
}