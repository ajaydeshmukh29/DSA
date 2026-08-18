/////////////////////////////////////////////////////////////////////////////
/// 
///   Accept the string from user and count the number of words or Tokens
/// 
/////////////////////////////////////////////////////////////////////////////

import java.util.*;

class StringX
{
  int CountTokens(String str)
  {
    str = str.trim();

    str = str.replaceAll("\\s+", " ");

    String Tokens[] = str.split(" ");
    return Tokens.length;
  }
}

class count_Tokens
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    String str = null;

    System.out.println("Enter the String : ");
    str = sobj.nextLine();

    StringX strX = new StringX();
    int iRet = 0;

    iRet = strX.CountTokens(str);

    System.out.println("Total number of Tokens are : "+iRet);

  }
}