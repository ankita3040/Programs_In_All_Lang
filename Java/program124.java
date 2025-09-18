import java.util.*;


class program124
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


    }
}