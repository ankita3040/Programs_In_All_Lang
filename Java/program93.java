// Input : 4
// Output :
/*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/

import java.util.*;

class Pattern
{
    public void DisplayPattern(int iRow, int iCol)
    {
        int j = 0, i =0;
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1 ; j<= iCol; j++)
            {
                System.out.print(j + "\t");
            }
            System.out.println();
        }
        


    }
}
class program93
{
    public static void main(String A[])
    {
        int iValue1 = 0, iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter rows :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter columnc :");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.DisplayPattern(iValue1,iValue2);
    }
}