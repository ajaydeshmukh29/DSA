/////////////////////////////////////////////////////////////////////////////////////////
/// 
///   write a program to check whether a given string is a Palindrome.
/// 
///   Description:
///   A string is called a Palindrome if it reads the same forward and backward
/// 
///   Input : madam
///   Output: Palindrome String
/// 
////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Palindrome
{
  void CheckString(String str)
  {
    str = str.trim();
    str = str.replaceAll("\\s+", " ");
    String Tokens[] = str.split(" ");
    
    System.out.println("Tokens are : ");                               
    for(int i = Tokens.length; i >= 0; i--)
      {
        System.out.println(Tokens[i]+" : "+Tokens[i].length());
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


