import java.util.Scanner;

class Pattern_Matching
{
public static void main(String A[])
{
  Scanner sobj = new Scanner(System.in);
  String str = null;

  System.out.println("Enter the string : ");
  str = sobj.nextLine();

  String Tokens[] = str.split(" ");
    for(int i = 0; i< Tokens.length; i++)
  {
    System.out.println(Tokens[i].length());
  }
}
}