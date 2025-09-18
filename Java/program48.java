import java.util.*;

class Digit
{
    public int CountDigit(int iNo)
    {
        int iDigit = 0, iCount = 0;

        while(iNo != 0)
        {
            
            iCount++;
            iNo = iNo / 10;
        }
        return iCount;

    }
}

class program48
{
    public static void main (String A[])
    {
        int iValue = 0, iRet = 0;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number");
        iValue = sobj.nextInt();


        Digit dobj = new Digit();
        iRet = dobj.CountDigit(iValue);

        System.out.println("Number of digit are :"+iRet);


    }
}