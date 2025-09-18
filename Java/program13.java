import java.util.*;

class DisplayClass
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= 4; iCnt++)
        {
              System.out.println(iNo);  
        }
     


    }
}

class program13
{
    public static void main(String A[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter value to be display :");
        iValue = sobj.nextInt();

        DisplayClass dobj = new DisplayClass();
        dobj.Display(iValue);

        
    }
}