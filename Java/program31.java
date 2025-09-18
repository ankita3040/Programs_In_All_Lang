//Imput : 5
//Output : 1*2*3*4*5 = 120
// unsigned int

import java.util.*;

class Factorial
{
    public int Fact( int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        int iCnt = 0,iFact = 1;

       iCnt = 1;
       while(iCnt <= iNo)
       {
        iFact = iFact * iCnt;
        iCnt++;
       }

        return iFact;
        
    } 
}

class program28
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