//////////////////////////////////////////////////////////////////////
/// 
///    Application which makes the first letter of every word Capital
///     
///    Input : jay ganesh
///    Output: Jay Ganesh
///////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class StringX
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter the string : ");  // Jay Ganesh
        str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+", " ");

        // convert string into array
        str = str.toLowerCase();

        char Arr[] = str.toCharArray();     // |j|a|y|_|g|a|n|e|s|h|
                                            //  0 1 2 3 4 5 6 7 8 9
        if(Arr[0] >= 'a' && Arr[0] <= 'z')
        {
            Arr[0] = (char)(Arr[0] - 32);   // j = (char)(106 - 32);
                                            // j = (char)(74);
                                            // j = J;
        }

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == ' ')
            {
                if(Arr[i+1] >= 'a' && Arr[i+1] <= 'z')
                {
                    Arr[i+1] = (char)(Arr[i+1] - 32);
                }
            }
        }
        String output = new String(Arr);
        System.out.println("Updated string is : "+output);
    }
}