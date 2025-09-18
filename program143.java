import java.util.*;

class ArrayProgram
{
    public void MinimumMaximum(int [] Arr, int iSize)
    {
        if((Arr == null) || (iSize <= 0))
        {
            System.out.println("Invali input");
            return ;
        }
        

        int iCnt = 0, iMin =0, iMax = 0;;

        iMin = Arr[0];
        iMax = Arr[0];

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
            if(Arr[iCnt] > iMax)
            {
                iMax = Arr[iCnt];
            }

        }

       

        System.out.println("Minimum element is "+iMin);
        System.out.println("Maximum element is "+iMax); // TC O(N)
    }

     
}

class program143
{
    public static void main(String A[])
    {
        int iLength = 0, iCnt = 0;

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
        aobj.MinimumMaximum(Arr,iLength);

       
        
   

    }
}