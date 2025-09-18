import java.util.*;

class ArrayProgram
{
    public int Summation(int [] Arr, int iSize)
    {
        int iCnt = 0, iSum = 0;
       

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
          iSum = iSum + Arr[iCnt];  
        }
        
        return iSum;
    }
}

class program123
{
    public static void main(String A[])
    {
       
        int [] Arr = new int [5];
        int iCnt = 0, iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements :");

        for(iCnt = 0; iCnt < 5 ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt() ;
        }

        ArrayProgram aobj = new ArrayProgram();
        iRet = aobj.Summation(Arr,5);

        System.out.println("Summation of array element is :"+iRet);

       

    }
}