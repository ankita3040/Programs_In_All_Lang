//Imput : 5
//Output : 1+2+3+4+5 = 15

import java.util.*;

class Sum
{
    public int Summation(int iNo)
    {
        int iCnt = 0,iSum = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iSum = iSum + iCnt;
        }

        return iSum;
        
    } 
}

class program25
{
    public static void main(String A[])
    {
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        Sum sumobj = new Sum();
        iRet = sumobj.Summation(iValue);

               
        System.out.println("Summation is :"+iRet);
        
    }
}