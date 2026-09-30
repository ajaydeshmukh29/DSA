/*
*   Application which is used to reverse the string in java programming
*/

import java.util.Scanner;

class String_word_reversal 
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the String : ");
    String str = sobj.nextLine();

    str = str.trim();
    str = str.replaceAll("\\s+"," ");
    String Tokens[] = str.split(" ");

    StringBuffer sb = null;

    for(int i = 0; i < Tokens.length; i++)
    {
      sb = new StringBuffer(Tokens[i]);
      System.out.println(sb.reverse());
    }
  }
}
