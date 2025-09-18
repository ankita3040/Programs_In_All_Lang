

import java.util.*;

class Factor
{
    public void DisplayFactor(int iNo)
    {
        if(iNo < 0)
        {
            iNo = - iNo;
        }
        int iCnt = 0;
        for(iCnt = 1; iCnt <= iNo/2; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }

    }
     
    
}

class program35
{
    public static void main(String A[])
    { 
        int iValue = 0;
       

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number to get factor :");
        iValue = sobj.nextInt();

        Factor fobj = new Factor();
        fobj.DisplayFactor(iValue);

    
        
    }
}