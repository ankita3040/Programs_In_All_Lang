import java.util.*;
class ArrayProgram
{
    public void Display(int [] Arr, int iSize)
    {
        int iCnt = 0;
        System.out.println("Entered  elements are :");

        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

    }
}

class program126
{
    public static void main(String A[])
    {
        int iCnt = 0, iLength = 0;

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
        aobj.Display(Arr,iLength);

        

    }
}