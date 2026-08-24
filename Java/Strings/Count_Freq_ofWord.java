/*
 * Application Name : Word Frequency Counter
 * Description      : Accepts a sentence and a target word from the user,
 *                    then calculates and displays the total frequency of that word.
 */

import java.util.Scanner;

class CountWord
{
  public void Word(String str1, String str2)
  {
    str1 = str1.trim();
    str1 = str1.replaceAll("\\s+", " ");

    String Arr[] = str1.split(" ");

    int Count = 0;

    for(int i = 0; i<Arr.length; i++)
    {
      if(Arr[i].equals(str2))
      {
        Count++;
      }
    }

    if(Count == 0)
    {
      System.out.println("There is no word");
    }
    else
    {
      System.out.print("Frequency of number is : "+Count);
    }
  }
}
class Count_Freq_ofWord
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    System.out.println("Enter the stirng : ");
    String sss = sobj.nextLine();

    System.out.println("find word : ");
    String fobj = sobj.nextLine();

    CountWord cobj = new CountWord();
    cobj.Word(sss, fobj);
  }
}