import java.util.*;

class DisplayClass
{
    public int Summation(int iNo)
    {
        int iCnt = 0, iSum =0;
        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            iSum = iSum +  iCnt;                
        }

        return iSum;
    }
}

class program18
{
    public static void main(String A[])
    {
        int iValue = 0, iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the frequency :");
        iValue = sobj.nextInt();

        DisplayClass dobj = new DisplayClass();
        iRet = dobj.Summation(iValue);


        System.out.println("Sum is :"+iRet);        

        
    }
}