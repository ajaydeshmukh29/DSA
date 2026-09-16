
import java.util.*;
/////////////////////////////////////////////////////////////////////////
//
//  Split the String using the .split() method
//
/////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Pattern_Matching
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);

    String str = null;

    System.out.println("Enter string : ");
    str = sobj.nextLine();

    str = str.trim();
    str = str.replaceAll("\\s+", " ");

    String Arr[] = str.split(" ");

    System.out.println("Number of words are : ");
    for(int i = 0; i<Arr.length; i++)
    {
      System.out.println(Arr[i]);
    }
  }
}

