//  Used to know the ticket price dependence on age
import java.util.*;
class Ticket
{
    public int CalculateTicket(int iAge)
    {
        if(iAge < 0)
        {
            return -1;
        }
        if((iAge >= 0) && (iAge <= 5 ))
        {
           return 0; 
        }

        else if((iAge > 5) && (iAge <= 18 ))
        {
           return 700; 
        }

        else if((iAge > 18) && (iAge <= 50 ))
        {
           return 999; 
        }

        else if(iAge > 50) 
        {
           return 500; 
        }

        return -1;
    }
}

class program8
{
    public static void main(String A[])
    {
        int iValue = 0, iRet = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter age ");

        iValue = sobj.nextInt(); 

        Ticket tobj = new Ticket();
        iRet = tobj.CalculateTicket(iValue);

        if(iRet == -1)
        {
            System.out.println("Invalid age");
        }
        else
        {
            System.out.println("Ticket price is "+iRet);
        }

    }
}