////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept a decimal number from user, apply bitwise XOR operation with iMask,
//  and display the updated number.
//
//  iMask = 0X00000084
//  
//
////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

public class XOR1 
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);

    int iNo = 0;
    int iMask = 0X00000084;
    int iAns = 0;

    System.out.println("Enter Number : ");
    iNo = sobj.nextInt();

    iAns = iNo ^ iMask;

    System.out.println("Updated Number is : "+iAns);
  }
}
