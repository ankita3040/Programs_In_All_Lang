// Input : 4 #
// Output: # # # #

// Input : 57 &
// Output: & & & & & 

// Input : 3 z
// Output: z z z



import java.util.*;
class Pattern
{
    public void DisplayPattern(int iNo, char ch)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
      
             System.out.print(ch+"\t");

        }
       
        System.out.println();
    }
}

class program85
{
    public static void main(String A[])
    {
        int iValue = 0;
        char cValue = '\0';
        Scanner sobj = new Scanner (System.in);

        System.out.println("Enter frequency :");
        iValue = sobj.nextInt();

        System.out.println("Enter character :");
        cValue = sobj.next().charAt(0);

        Pattern pobj= new Pattern();
        pobj.DisplayPattern(iValue,cValue);


    }
}