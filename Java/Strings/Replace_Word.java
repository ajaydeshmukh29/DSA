/*
* Accept a string, target word and replacement word that user want to chage and replace the word
*
* Input : India is my Country
* Target: India
* Replace: Bharat
* 
* OUTPUT: Bharat is my Country
*/

import java.util.Scanner;

class Replace_Word
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the String : ");
    String str = sobj.nextLine();

    System.out.println("Which word you want to replace? ");
    String Target = sobj.nextLine();

    System.out.print("Add word : ");
    String cTarget = sobj.nextLine();

    str = str.trim();
    str = str.replaceAll("\\s+", " ");
    String Tokens[] = str.split(" ");

    StringBuffer FinalStr = new StringBuffer(" ");

    for(int i = 0; i<Tokens.length; i++)
    {
      if(Tokens[i].equals(Target))
      {
        FinalStr = FinalStr.append(cTarget);
        FinalStr = FinalStr.append(" ");
        continue;
      }
      FinalStr = FinalStr.append(Tokens[i]);
      FinalStr = FinalStr.append(" ");
    }
    String output = new String(FinalStr);
    output = output.trim();
    System.out.println("Final String is : "+output);
  }
}
