/*
  * Collections in java - HashMap
*/
package HashMap;

import java.util.HashMap;
import java.util.Scanner;

class Count 
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter string : ");
    String str = sobj.nextLine();

    HashMap<Character, Integer> hobj = new HashMap<Character, Integer>();

    char Arr[] = str.toCharArray();
    int iCount = 0;

    for(char ch : Arr)
    {
      if(hobj.containsKey(ch))
      {
        iCount = hobj.get(ch);
        hobj.put(ch, iCount+1);
      }
      else
      {
        hobj.put(ch,1);
      }
    }
    int iMax = 0;
    char temp = '\0';

    for(char cValue : hobj.keySet())
    {
      if(hobj.get(cValue) > iMax)
      {
        iMax = hobj.get(cValue);
        temp = cValue;
      }
    }
    System.out.println(temp+" occurs maximum times i.e : "+iMax);
  }
  
}
