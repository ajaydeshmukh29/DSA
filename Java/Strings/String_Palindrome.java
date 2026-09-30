/////////////////////////////////////////////////////////////////////////////////////////
/// 
///   write a program to check whether a given string is a Palindrome.
/// 
///   Description:
///   A string is called a Palindrome if it can reads the same forward and backward
/// 
///   Input : madam
///   Output: Palindrome String
/// 
////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

import javax.security.auth.callback.TextOutputCallback;

class Palindrome
{
  void CheckString(String str)
  {
    str = str.trim();
    str = str.replaceAll("\\s+", " ");
    String Tokens[] = str.split(" ");

    for(int i = 0; i<Tokens.length; i++)
    {
      if(Tokens[i].equals(Tokens))
      {
        System.out.println(Tokens[i]);
      }
    }
  }
}

class String_Palindrome
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    String str = null;

    System.out.println("Enter the String : ");
    str = sobj.nextLine();

    Palindrome plobj = new Palindrome();
    plobj.CheckString(str);
  }
}


