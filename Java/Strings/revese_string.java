/*  
*  Revese a string (Type - II)
*/

import java.util.Scanner;

class reverse_string
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter string : ");
    String str = sobj.nextLine();

    StringBuilder result = new StringBuilder();

    for(int i = str.length()-1; i >= 0; i--)
    {
      result.append(str.charAt(i));
    }
    System.out.println("Reversed String : "+result);
  }
}