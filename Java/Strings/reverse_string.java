/*
*   Reverse the String without using any built-in reverse method.
*/

import java.util.*;

class reverse_string
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter String : ");  // Maharashtra
    String str = sobj.nextLine();

    str = str.replaceAll("\\s+", "");

    char Arr[] = str.toCharArray();

    System.out.print("Reveresed String is : ");

    for(int i = Arr.length - 1; i >= 0; i--)
    {
      System.out.print(Arr[i]);
    }
  }
}