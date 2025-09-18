import java.util.*;

class DisplayClass
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
              System.out.println(iCnt);  
        }
     


    }
}

class program16
{
    public static void main(String A[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the frequency :");
        iValue = sobj.nextInt();

        DisplayClass dobj = new DisplayClass();
        dobj.Display(iValue);

        
    }
}