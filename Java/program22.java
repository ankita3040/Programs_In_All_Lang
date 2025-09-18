import java.util.*;

class Divisible
{
    public boolean CheckDivisible(int iNo)
    {
        boolean bResult = false;
        if((iNo % 5) == 0)
        {
            bResult = true;
        }
        else
        {
           bResult = false;
        }
        
        return bResult;
    } 
}

class program22
{
    public static void main(String A[])
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        Divisible dobj = new Divisible();
        bRet = dobj.CheckDivisible(iValue);

        if(bRet == true)
        {
            System.out.println(iValue +" is divisible by 5");

        }
        else
        {
            System.out.println(iValue +" is not divisible by 5");
        }

               

        
    }
}