///////////////////////////////////////////////////////////////////////
//
//  Accept the String from user and Calculate the number of Tokens
//
///////////////////////////////////////////////////////////////////////

import java.util.*;

class Calculate_Str_Tokens
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    String str = null;

    System.out.println("Enter the string : ");
    str = sobj.nextLine();
    
    str = str.trim();
    str = str.replaceAll("\\s+", " ");
    
    String Tokens[] = str.split(" ");
    
    System.out.println("-----------------------------------------");
    System.out.println("Tokens : ");
    for(int i = 0; i < Tokens.length; i++)
      {
        System.out.println(Tokens[i]);
      }
      System.out.println("-----------------------------------------");
      System.out.println("Total number of Tokens are : "+Tokens.length);
      System.out.println("-----------------------------------------");
  }
}
