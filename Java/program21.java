import java.util.*;

class Even
{
    public boolean CheckEven(int iNo)
    {
        return ( (iNo % 2) == 0);
    } 
}

class program21
{
    public static void main(String A[])
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number :");
        iValue = sobj.nextInt();

        Even eobj = new Even();
        bRet = eobj.CheckEven(iValue);

        if(bRet == true)
        {
            System.out.println(iValue +" is Even number");

        }
        else
        {
            System.out.println(iValue+" is Odd number  ");
        }

               

        
    }
}