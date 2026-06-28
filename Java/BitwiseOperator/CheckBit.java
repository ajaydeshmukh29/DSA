/////////////////////////////////////////////////////////////
//
//  Application which Check the 4 th bit is ON or OFF
//
/////////////////////////////////////////////////////////////


import java.util.*;

class CheckBit
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);

    int iNo = 0;
    int iMask = 8;
    int iAns = 0;

    System.out.println("Enter Number : ");
    iNo = sobj.nextInt();

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
      System.out.println("4th Bit is ON");
    }
    else
    {
      System.out.println("4th Bit is OFF");
    }
  }
}