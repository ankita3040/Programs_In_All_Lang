import java.util.*;
class ArrayProgram
{
    public int OddCount(int [] Arr, int iSize)
    {
        int iCnt = 0, iCount = 0;
        System.out.println("Entered  elements are :");

        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
            if((Arr[iCnt] % 2) != 0)
            {
                iCount++;
            }
        }

        return iCount;

    }
}

class program129
{
    public static void main(String A[])
    {
        int iCnt = 0, iLength = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements ");
        iLength = sobj.nextInt();

        int [] Arr = new int [iLength];

        System.out.println("Enter elements :");

        for(iCnt = 0; iCnt < iLength ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt() ;
        }

        ArrayProgram aobj = new ArrayProgram();
        iRet = aobj.OddCount(Arr,iLength);

        System.out.println("Odd elements from array are  "+iRet);

        

    }
}