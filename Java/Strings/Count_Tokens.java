
class StringX
{
  int CountTokens(String str)
  {
    str = str.trim();

    str = str.replaceAll("\\s+", " ");

    String Tokens[] = str.split(" ");
    return Tokens.length;
  }
}

