////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application which Accept two number from user and Display the Common ON bits Position in that number 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class ONBIT 
{
  public void Display(int iNo1, int iNo2)
  {
    int iMask = 0X1;
    int iAns1 = 0;
    int iAns2 = 0;

    System.out.println("Position of ON Bits are : ");
    for(int iCnt = 1; iCnt <= 32; iCnt++)
    {
      iAns1 = iNo1 & iMask;
      iAns2 = iNo2 & iMask;

      if((iAns1 == iMask) && (iAns2 == iMask))
      {
        System.out.println(iCnt);
      }
      iMask = iMask<<1;
    }
  }
}

class ON_Bits_Pos
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    
    ONBIT objOnbit = new ONBIT();

    int iNum1 = 0;
    int iNum2 = 0;
    int iRet = 0;

    System.out.print("Enter First Number : ");
    iNum1 = sobj.nextInt();

    System.out.print("Enter Second Number : ");
    iNum2 = sobj.nextInt();

    objOnbit.Display(iNum1,iNum2);
  }
}