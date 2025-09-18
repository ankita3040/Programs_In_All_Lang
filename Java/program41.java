
import java.util.*;

class Perfect
{
    public boolean CheckPerfect(int iNo)
    {
        if(iNo < 0)
        {
            iNo = - iNo;
        }

        int iCnt = 0, iSum = 0;

        for(iCnt = 1; iCnt <= iNo/2; iCnt++)
        {
            if((iNo % iCnt ) == 0)
            {
                iSum = iSum + iCnt;
            } 
           
        }
        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }

        

    }
     
    
}

class program41
{
    public static void main(String A[])
    { 
        int iValue = 0;
        boolean bRet = false;
       

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        Perfect fobj = new Perfect();
        bRet = fobj.CheckPerfect(iValue);

        if(bRet == true)
        {
            System.out.println(iValue +" is perfect number");
        }
        else
        {
            System.out.println(iValue +" is not perfect number");
        }

        

    
        
    }
}