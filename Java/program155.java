
// use string array 
import java.util.*;
class StringProgram
{
    public void StringtoChar( String [] str)
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < str.length; iCnt++)
        {
            
        }

        System.out.println("Your name is "+str);

    }
}

class program155
{
    public static void main(String A[])
    {
       
        int iCnt = 0, iLength = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter length of string");
        iLength = sobj.nextInt();

        System.out.println("Enter your name ");

        String [] strValue = new String[iLength];
        for(iCnt = 0; iCnt < iLength; iCnt++)
        {
             strValue[iCnt] = sobj.nextLine();  
        }  
    

        StringProgram strobj =new StringProgram();
        strobj.StringtoChar(strValue);

        
    }
}