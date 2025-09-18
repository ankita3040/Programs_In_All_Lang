
class DisplayClass
{
    public void Display()
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt <= 4; iCnt++)
        {
              System.out.println(iCnt);  
        }
     


    }
}

class program12
{
    public static void main(String A[])
    {
        DisplayClass dobj = new DisplayClass();
        dobj.Display();

        
    }
}