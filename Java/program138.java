import java.util.*;
class ArrayProgram
{
    public int Frequency(int [] Arr, int iSize, int iNo)
    {
        if((Arr == null ) || (iSize <=0 ))
        {
            return -1;
        }

        int iCnt = 0, iCount = 0;
        
        

        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
           if(Arr[iCnt] == iNo)
           {
                iCount++;
           }
        }
    return iCount;        

    }
}

class program138
{
    public static void main(String A[])
    {
        int iCnt = 0, iLength = 0 , iValue = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements ");
        iLength = sobj.nextInt();

        int [] Arr = null; // try - catch

        try
        {
            Arr = new int[iLength];
        }
        catch(OutOfMemoryError e)
        {
            System.out.println("Unable to allocate memory");
            return;
        }

        System.out.println("Enter elements :");

        for(iCnt = 0; iCnt < iLength ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt() ;
        }

        System.out.println("Enter element to search");
        iValue = sobj.nextInt();

        ArrayProgram aobj = new ArrayProgram();
        iRet = aobj.Frequency(Arr,iLength,iValue);

        if(iRet == -1)
        {
            System.out.println("There issue in the input ");
        }       
        else
        {
            System.out.println(iValue+" is appears "+iRet+ " times in array");
        }

        

    }
}