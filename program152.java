import java.util.*;


class program152
{
    public static void main(String A[])
    {
        String [] str = new String [2];
        int iCnt = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name ");
        
        for(iCnt = 0; iCnt <str.length; iCnt++)
        {
            str[iCnt] = sobj.nextLine();
        }

        System.out.println("Your name is "+str);
    }
}