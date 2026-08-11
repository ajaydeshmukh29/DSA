////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application which accept the String form user and calculate the number of letter in the Largest word/Token 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Larg 
{
  void Largest(String str)
  {
    int iMax = 0;
    String temp = null;

    str = str.trim();
    str = str.replaceAll("\\s+", " ");

    String Tokens[] = str.split(" ");

    for(int i = 0; i < Tokens.length; i++)
    {
      if(Tokens[i].length() > iMax)
      {
        iMax = Tokens[i].length();
        temp = Tokens[i];
      }
    }
     System.out.println("-----------------------------------------");
     System.out.println("Largest word is  : "+temp);
     System.out.println("Largest Number of word's letters are : "+iMax);
     System.out.println("-----------------------------------------");
  }
}

class Cal_Largest_Token 
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    String str = null;

    System.out.println("Enter the String : ");
    str = sobj.nextLine();

    Larg lobj = new Larg();

    lobj.Largest(str);
  }
}
