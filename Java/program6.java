// Calculate perecntage 

import java.util.*;

class Percentage
{
    void DisplayClass( float fPerc)
    {
       if(fPerc < 0.0f || fPerc > 100.f)
       {
        System.out.println("Unable to proceed as input is invalid");
       } 

       if(fPerc > 0.0f && fPerc < 35.0f)
       {
        System.out.println("You are fail");
       } 


       if(fPerc >= 35.0f && fPerc < 50.0f)
       {
        System.out.println("You are Pass");
       }

       
       if(fPerc >= 50.0f && fPerc < 60.0f)
       {
        System.out.println("Second Classs");
       }  


       if(fPerc >= 60.0f && fPerc < 70.0f)
       {
        System.out.println("First Class");
       } 


       if(fPerc >= 70.0f && fPerc < 100.0f)
       {
        System.out.println("First class with distinction");
       } 

    }
       
}
        

class program6
{
    public static void main(String A[])
    {
        float fValue = 0.0f;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your percentage :");
        fValue = sobj.nextFloat();

        Percentage pobj = new Percentage();
        pobj.DisplayClass(fValue);

  
        
    }
}