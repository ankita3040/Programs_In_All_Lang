
// use string array 
import java.util.*;
class StringProgram
{
    public void Display( String str)
    {
        System.out.println("Your name is "+str);

    }
}

class program154
{
    public static void main(String A[])
    {
        String str = new String();
        int iCnt = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name ");
        str = sobj.nextLine();    
    

        StringProgram strobj =new StringProgram();
        strobj.Display(str);

        
    }
}