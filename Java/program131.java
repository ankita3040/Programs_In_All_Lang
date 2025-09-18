import java.util.*;
class ArrayProgram
{
    public int SumOdd(int [] Arr, int iSize)
    {
        int iCnt = 0, iSum = 0;
        System.out.println("Entered  elements are :");

        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
            if((Arr[iCnt] % 2) != 0)
            {
               iSum = iSum + Arr[iCnt];
            }
        }

        return iSum;

    }
}

class program131
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
        iRet = aobj.SumOdd(Arr,iLength);

        System.out.println("Summation of odd elements is: "+iRet);

        

    }
}