/* 
*   Reverse Each word in Sting using built-in method (Type  - III)
*/

import java.util.*;

class ReverseEachWord
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter string : ");
    String str = sobj.nextLine();

    str = str.replaceAll("\\s+", "");

    String words[] = str.split(" ");

    StringBuilder result = new StringBuilder();

    for(String word : words)
    {
      for(int i = word.length()-1; i>=0; i--)
      {
        result.append(word.charAt(i));
      }
      result.append(" ");
    }
    System.out.println("Result : " + result);
  } 
}