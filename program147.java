import java.util.*;

class CharcterProgram
{
    public boolean CheckCapital(char ch)
    {
        if((ch >= 65) && (ch <= 90))
        {
            return true;
        }
        else
        {
            return false;
        }

    }
}

class program147
{
    public static void main(String A[])
    {
        char cValue =' ';
        boolean bRet = false;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter charcter :");
        cValue = sobj.next().charAt(0);

        CharcterProgram cobj = new CharcterProgram();
        bRet = cobj.CheckCapital(cValue);

        if(bRet == true)
        {
            System.out.println(cValue+" is capital");
        }
        else
        {
            System.out.println(cValue + " is not capital");
        }

     
         

    }
}