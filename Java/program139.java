import java.util.*;
class ArrayProgram
{
    int Maximum(int [] Arr, int iSize)
    {
        if((Arr == null) || (iSize <= 0))
        {
            return -1;
        }
        
        int iCnt = 0 ,iMax = 0;

        iMax = Arr[0];
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(iMax < Arr[iCnt])
            {
                iMax = Arr[iCnt];
            }
        }

        return iMax;

    }
}
class program139
{
    public static void main(String A[])
    {
        int iLength = 0, iRet = 0, iCnt = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number of elements :");
        iLength = sobj.nextInt();

        int [] Arr = null;

        try
        {       
           Arr = new int[iLength]; 
        }
            
        catch(OutOfMemoryError e)
        {
            System.out.println("Unable to allocate memory ");
        }

        System.out.println("Enter elements :");

        for(iCnt = 0; iCnt < iLength; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayProgram aobj = new ArrayProgram();
        iRet = aobj.Maximum(Arr, iLength);

        if(iRet == -1)
        {
            System.out.println("There is an issue in the program ");
        }
        else
        {
            System.out.println("Largest  element from array is "+iRet);
        }
        
    } 


    
}