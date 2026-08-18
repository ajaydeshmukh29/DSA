import java.util.*;

class StringXX
{
  int CountWord(String str)
  {
    str = str.trim();
    str = str.replaceAll("\\s+", " ");
    String Tokens[] = str.split(" ");
    return Tokens.length;
  }
}

class StringX 
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    String str = null;
    int iRet = 0;

    System.out.println("Enter String : ");
    str = sobj.nextLine();

    StringXX sobjx = new StringXX();
    iRet = sobjx.CountWord(str);
    System.out.println(iRet);

  }
}