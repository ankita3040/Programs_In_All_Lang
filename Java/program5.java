// Calculate perecntage 

import java.util.*;

class Percentage
{
        float CalculatePercentage (int TotalMarks, int ObtainedMarks)
        {
            float perecntage = 0.0f;
            perecntage = ((float)ObtainedMarks / (float)TotalMarks) * 100;
            return perecntage;
       
        }
}
        

class program5
{
    public static void main(String A[])
    {
        int Total = 0, Obtained = 0;
        float iRet = 0.0f;
       

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your total marks :");
        Total = sobj.nextInt();

        System.out.println("Enter your obtained marks :");
        Obtained = sobj.nextInt();

        Percentage pobj = new Percentage();
        iRet = pobj.CalculatePercentage(Total,Obtained);

         System.out.println("Percentage is :"+iRet);

  
        
    }
}