import java.util.*;

class Digit
{
    public int EvenCountDigit(int iNo)
    {
        int iDigit = 0, iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
            {
                   iCount++;
            }
         
             iNo = iNo / 10;
           
        }
        return iCount;

    }
}

class program49
{
    public static void main (String A[])
    {
        int iValue = 0, iRet = 0;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number");
        iValue = sobj.nextInt();


        Digit dobj = new Digit();
        iRet = dobj.EvenCountDigit(iValue);

        System.out.println("Number of even digits are :"+iRet);


    }
}