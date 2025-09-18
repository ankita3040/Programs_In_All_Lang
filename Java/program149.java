import java.util.*;

class CharcterProgram
{
    public boolean CheckSmall(char ch)
    {
        if((ch >= 'a') && (ch <= 'z'))
        {
            return true;
        }
        else
        {
            return false;
        }

    }
}

class program149
{
    public static void main(String A[])
    {
        char cValue =' ';
        boolean bRet = false;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter charcter :");
        cValue = sobj.next().charAt(0);

        CharcterProgram cobj = new CharcterProgram();
        bRet = cobj.CheckSmall(cValue);

        if(bRet == true)
        {
            System.out.println(cValue+" is small letter");
        }
        else
        {
            System.out.println(cValue + " is not small letter");
        }

     
         

    }
}