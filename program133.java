import java.util.*;
class ArrayProgram
{
    public boolean Search(int [] Arr, int iSize, int iNo)
    {
        int iCnt = 0;
        System.out.println("Entered  elements are :");

        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
           if(Arr[iCnt] == iNo)
           {
                break;
           }
        }

        if(iCnt == iSize)
           {
                return false;  
           }
           else
           {
                return true;
           }

        

    }
}

class program133
{
    public static void main(String A[])
    {
        int iCnt = 0, iLength = 0 , iValue = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements ");
        iLength = sobj.nextInt();

        int [] Arr = new int [iLength];

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
             System.out.println(iValue+" is Found ");
        }
        else
        {
            System.out.println(iValue+" is  not Found ");
        }
       

        

    }
}