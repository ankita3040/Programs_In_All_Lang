import java.util.*;
class ArrayProgram
{
    public boolean Search(int [] Arr, int iSize, int iNo)
    {
        if((Arr == null ) || (iSize <=0 ))
        {
            return false;
        }

        int iCnt = 0;
        boolean bFlag = false;
        

        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
           if(Arr[iCnt] == iNo)
           {
                bFlag == true;
                break;
           }
        }
    return bFlag;        

    }
}

class program137
{
    public static void main(String A[])
    {
        int iCnt = 0, iLength = 0 , iValue = 0;
        boolean bRet = false;

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
        bRet = aobj.Search(Arr,iLength,iValue);

        if(bRet == true)
        {
             System.out.println(iValue+" is present  in array ");
        }
        else
        {
            System.out.println(iValue+" is present  in array ");
        }
       

        

    }
}