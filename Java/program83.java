// Input : 4
// Output: -4 -3 -2 -1 0 1 2 3 4 

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

        for(iCnt = -iNo; iCnt <=  0; iCnt++)
        {
      
             System.out.print(iCnt+"\t");

        }
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {

             System.out.print(iCnt+"\t");
        } 
        System.out.println();
    }
}

class program83
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