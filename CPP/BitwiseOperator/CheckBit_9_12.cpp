//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application which accepts one number from user and checks whether
//  9th or 12th bit is ON or OFF.
//
//  Input  : 257
//  Output : TRUE
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X00000900;   // 9th and 12th bit mask
    UINT iAns = 0;

    iAns = iNo & iMask;

    if(iAns != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iNum = 0;
    bool bRet = false;

    cout << "Enter Number : ";
    cin >> iNum;

    bRet = ChkBit(iNum);

    if(bRet == true)
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }

    return 0;
}