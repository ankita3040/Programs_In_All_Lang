
import java.util.*;

class Prime
{
    public boolean CheckPrime(int iNo)
    {
        if(iNo < 0)
        {
            iNo = - iNo;
        }

        int iCnt = 0;
        

        for(iCnt = 2; iCnt <= iNo/2; iCnt++)
        {
            if((iNo % iCnt ) == 0)
            {
                break; 
            } 
           
        } 

        if(iCnt > (iNo / 2))
        {
            return true;
        }
        else
        {
            return false;
        }
    
    }
     
    
}

class program43
{
    public static void main(String A[])
    { 
        int iValue = 0;
        boolean bRet = false;
       

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        Prime fobj = new Prime();
        bRet = fobj.CheckPrime(iValue);

        if(bRet == true)
        {
            System.out.println(iValue +" is prime number");
        }
        else
        {
            System.out.println(iValue +" is not prime number");
        }

        

    
        
    }
}