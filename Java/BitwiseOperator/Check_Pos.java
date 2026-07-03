////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application which accept one number and two positions from user and check whether 
//  Bit at first or Bit at second position is ON or OFF
//
//  Input : 10    Position : 3  7
//  Output: TRUE
//////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class TwoPositions
{
  public boolean Display(int iNo, int iFPos, int iSPos)
  {
    int iMask1 = 0X00000001;
    int iMask2 = 0X00000001;
   
    int iAns1 = 0;

    iMask1 = iMask1 << (iFPos - 1);
    iMask2 = iMask2 << (iSPos - 1);

    iAns1 = (iMask1 | iMask2) & iNo;

    if(iAns1 != 0)
    {
      return true;
    }
    else 
    {
     return false;
    }

  }
}


class Check_Pos
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);

    TwoPositions twpopb = new TwoPositions();

    int iNum = 0;
    int iPos1 = 0;
    int iPos2 = 0;
    boolean bRet = false;

    System.out.println("Enter Number : ");
    iNum = sobj.nextInt();

    System.out.println("Enter First Position : ");
    iPos1 = sobj.nextInt();

    System.out.println("Enter Second Position : ");
    iPos2 = sobj.nextInt();

    bRet = twpopb.Display(iNum, iPos1, iPos2);

    if(bRet == true)
    {
      System.out.println("TRUE");
    }
    else
    {
      System.out.println("FALSE");
    }

  }
}