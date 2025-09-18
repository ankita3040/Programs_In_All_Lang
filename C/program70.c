#include<stdio.h>

void DisplayEven(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    
    int iCount =0, iDigit = 0;

    printf("Even Digits are :\n");
    while(iNo > 0)
    {   
        iDigit = iNo % 10;
        
        if((iDigit % 2) == 0)
        {
            printf("%d\n",iDigit);
        }

       
        iNo = iNo / 10;
        
    }
    
   
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayEven(iValue);

    return 0;
}