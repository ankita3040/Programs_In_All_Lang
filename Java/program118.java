import java.util.*;

class program118
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
       

        System.out.println("Elements from array are :");
        
        for(iCnt = 0; iCnt < 5 ; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}