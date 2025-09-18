import java.util.*;

class program145
{
    public static void main(String A[])
    {
        char ch =' ';
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter charcter :");
        ch = sobj.next().charAt(0);

        int iascii = (int) ch;

     

        System.out.println("ASCII value of : "+ch+" is "+iascii);
         

    }
}