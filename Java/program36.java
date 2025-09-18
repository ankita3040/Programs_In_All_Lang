

import java.util.*;

class Factor
{
    public void DisplayFactorNonFcator(int iNo)
    {
        if(iNo < 0)
        {
            iNo = - iNo;
        }
        int iCnt = 0;
        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println("Factor is :"+iCnt);
            }
            else
            {
                System.out.println("Non Factor is :"+iCnt);
            }
        }

    }
     
    
}

class program36
{
    public static void main(String A[])
    { 
        int iValue = 0;
       

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number to get factor and non factor :");
        iValue = sobj.nextInt();

        Factor fobj = new Factor();
        fobj.DisplayFactorNonFcator(iValue);

    
        
    }
}