import java.util.*;

class ArrayProgram
{
    public int Minimum(int [] Arr, int iSize)
    {
        if((Arr == null) || (iSize <= 0))
        {
            System.out.println("Invali input");
            return -1;
        }
        

        int iCnt = 0, iMin =0;

        iMin = Arr[0];
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
        }

        return iMin;

    }
}

class program141
{
    public static void main(String A[])
    {
        int iLength = 0, iCnt = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements in array :");
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

        System.out.println("Enter array elements :");

        for(iCnt = 0; iCnt < iLength; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        ArrayProgram aobj = new ArrayProgram();
        iRet = aobj.Minimum(Arr,iLength);

       
        System.out.println("Smallest element from array is "+iRet);
   

    }
}