import java.util.*;

class ArrayProgram
{
    public void Display(int [] Arr, int iSize)
    {
        
        System.out.println("Array elements are :");

        System.out.println(Arr[0]);
        System.out.println(Arr[1]);
        System.out.println(Arr[2]);
        System.out.println(Arr[3]);
        System.out.println(Arr[4]);


        
    }
}

class program119
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