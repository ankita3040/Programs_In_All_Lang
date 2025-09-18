#include<stdio.h>

void DisplayEven(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    
    printf("Even Digits are :\n");
    
    while(iNo > 0)
    {   
        if(((iNo % 10) % 2 ) == 0)
        {
            printf("%d\n",(iNo % 10));
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