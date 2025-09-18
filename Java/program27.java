//Imput : 5
//Output : 1*2*3*4*5 = 120

import java.util.*;

class Factorial
{
    public int Fact(int iNo)
    {
        if(iNo < 0)
        {
            return -1;
        }
        int iCnt = 0,iFact = 1;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }

        return iFact;
        
    } 
}

class program27
{
    public static void main(String A[])
    {
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        Factorial fobj = new Factorial();
        iRet = fobj.Fact(iValue);

        if(iRet == -1)
        {
           System.out.println("Invlaid Input"); 
        }
        else
        {
            System.out.println("Factorial of number  is :"+iRet);

        }

               
        
        
    }
}