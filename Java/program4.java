// Calculate perecntage 

import java.util.*;

class program4
{
    public static void main(String A[])
    {
        int Total = 0, Obtained = 0;
        float perecntage = 0.0f;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your total marks :");
        Total = sobj.nextInt();

        System.out.println("Enter your obtained marks :");
        Obtained = sobj.nextInt();

        perecntage = ((float)Obtained / (float)Total) * 100;
        System.out.println("Percentage is :"+perecntage);
        
    }
}