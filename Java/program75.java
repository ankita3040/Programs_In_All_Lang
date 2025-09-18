// Input : 4
// Output: * * * *
import java.util.*;
class Pattern
{
    public void DisplayPattern(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print("*\t");
        }
        System.out.println();
    }
}

class program75
{
    public static void main(String A[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner (System.in);

        System.out.println("Enter frequency :");
        iValue = sobj.nextInt();

        Pattern pobj= new Pattern();
        pobj.DisplayPattern(iValue);


    }
}