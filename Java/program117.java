import java.util.*;

class program117
{
    public static void main(String A[])
    {
       
        int [] Arr = new int [5];
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements :");

        Arr[0] = sobj.nextInt();
        Arr[1] = sobj.nextInt();
        Arr[2] = sobj.nextInt();
        Arr[3] = sobj.nextInt();
        Arr[4] = sobj.nextInt();

        System.out.println("Elements from array are :");
        int iCnt = 0;
        for(iCnt = 0; iCnt < 5 ; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}