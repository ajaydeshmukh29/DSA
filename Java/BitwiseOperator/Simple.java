/////////////////////////////////////////////////////////////////////////////////////////
//
//  Program which accept one number from user and range of positions from user.
//  Toggle all bits from that range.
//
//  Input : 897   9   13
//  Output: Toggle all bits from position 9 to 13
//
/////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Toggle
{
    public int Display(int iNo, int iPos1, int iPos2)
    {
        int iMask = 0;
        int iFinal = 0;

        // Validate positions
        if((iPos1 < 1 || iPos1 > 32) || (iPos2 < 1 || iPos2 > 32) || (iPos1 > iPos2))
        {
            return iNo;
        }

       // Create mask for the given range
        for(int iCnt = iPos1; iCnt <= iPos2; iCnt++)
        {
            iMask = iMask | (1 << (iCnt - 1));
        }

        // Toggle bits
        iFinal = iNo ^ iMask;

        return iFinal;
    }
}

class Simple
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        Toggle tobj = new Toggle();

        int iNum = 0;
        int iPos1 = 0;
        int iPos2 = 0;
        int iRet = 0;

        System.out.print("Enter Number : ");
        iNum = sobj.nextInt();

        System.out.print("Enter First Position : ");
        iPos1 = sobj.nextInt();

        System.out.print("Enter Second Position : ");
        iPos2 = sobj.nextInt();

        iRet = tobj.Display(iNum, iPos1, iPos2);

        System.out.println("Updated Number : " + iRet);

        sobj.close();
    }
}