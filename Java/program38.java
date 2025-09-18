
import java.util.*;

class Factor
{
    public int SumFactor(int iNo)
    {
        if(iNo < 0)
        {
            iNo = - iNo;
        }

        int iCnt = 0, iSum = 0;

        for(iCnt = 1; iCnt <= iNo/2; iCnt++)
        {
            iSum = iSum + iCnt;
           
        }

        return iSum;

    }
     
    
}

class program38
{
    public static void main(String A[])
    { 
        int iValue = 0, iRet = 0;
       

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number to get sum of that factor :");
        iValue = sobj.nextInt();

        Factor fobj = new Factor();
        iRet = fobj.SumFactor(iValue);

        System.out.println("Summation of factors is :"+iRet);

    
        
    }
}