/*
*
* Check whether Strings are Anagram or not without inbuilt functions
*
* Anagram meaning: Two words are anagrams if one can be formed by
* just rearranging the letters of the other, using all letters exactly once.
* Example: "listen" and "silent".
*/

import java.util.Scanner;

class String_Anagrams 
{
  public static boolean CheckAnagram(String str1, String str2)
  {
    // Remove all spaces and convert to lowercase BEFORE comparing lengths
    str1 = str1.replaceAll("\\s+", "");
    str1 = str1.toLowerCase();

    str2 = str2.replaceAll("\\s+", "");
    str2 = str2.toLowerCase();

    if(str1.length() != str2.length())
    {
      return false;
    }

    char Arr[] = str1.toCharArray();
    char Brr[] = str2.toCharArray();

    int Frequency[] = new int[26];
    int i = 0;

    for(i = 0; i < Arr.length; i++)
    {
      if(Arr[i] >= 'a' && Arr[i] <= 'z')
      {
        Frequency[(int)Arr[i] - 97]++;
      }

      if(Brr[i] >= 'a' && Brr[i] <= 'z')
      {
        Frequency[(int)Brr[i] - 97]--;
      }
    }

    boolean bFlag = true;

    for(i = 0; i < Frequency.length; i++)
    {
      if(Frequency[i] != 0)
      {
        bFlag = false;
        break;
      }
    }
    return bFlag;
  }

  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter first string : ");
    String str1 = sobj.nextLine();

    System.out.println("Enter second string : ");
    String str2 = sobj.nextLine();

    boolean bRet = CheckAnagram(str1, str2);

    if(bRet == true)
    {
      System.out.println("Strings are anagram");
    }
    else
    {
      System.out.println("Strings are not anagram");
    }

    sobj.close();
  }
}