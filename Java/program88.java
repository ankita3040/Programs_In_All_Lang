// Iteration with Sequence 



class Pattern
{
    public void DisplayPattern()
    {
        int j = 0;
        for(j =1 ; j<= 3; j++)
        {
            System.out.print("*\t");
        }
        System.out.println();

        for(j =1 ; j<= 3; j++)
        {
            System.out.print("*\t");
        }
        System.out.println();

        for(j =1 ; j<= 3; j++)
        {
            System.out.print("*\t");
        }
        System.out.println();

    }
}
class program88
{
    public static void main(String A[])
    {

        Pattern pobj = new Pattern();
        pobj.DisplayPattern();
    }
}