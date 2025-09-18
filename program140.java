import java.util.*;
class ArrayProgram
{
    int Maximum(int [] Arr, int iSize)
    {
        if((Arr == null) || (iSize <= 0))
        {
            System.out.println("Invali input");
            return -1;
        }
        
        int iCnt = 0 ,iMax = 0;

        iMax = Arr[0];
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] > iMax)
            {
                iMax = Arr[iCnt];
            }
        }

        return iMax;

    }
}
class program140
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

        
        System.out.println("Largest  element from array is "+iRet);
        
        
    } 


    
}