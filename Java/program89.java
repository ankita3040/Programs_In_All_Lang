
//Iteration to Iteration

// Iteration with Sequence 



class Pattern
{
    public void DisplayPattern()
    {
        int j = 0, i =0;
        for(i = 1; i <= 3; i++)
        {
            for(j = 1 ; j<= 3; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
        


    }
}
class program89
{
    public static void main(String A[])
    {

        Pattern pobj = new Pattern();
        pobj.DisplayPattern();
    }
}