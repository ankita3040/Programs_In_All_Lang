import java.util.*;

class ArrayProgram
{
    public void Display(int [] Arr, int iSize)
    {
        int iCnt = 0;
        System.out.println("Array elements are :");

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }


        
    }
}

class program122
{
    public static void main(String A[])
    {
       
        int [] Arr = new int [5];
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements :");

        for(iCnt = 0; iCnt < 5 ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt() ;
        }

        ArrayProgram aobj = new ArrayProgram();
        aobj.Display(Arr,5);

       

    }
}