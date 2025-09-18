#include<stdio.h>


void DisplayFactor(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }

    int iCnt = 0;

    printf("Fcators are :\n");
    for(iCnt = 1; iCnt < iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
   
    printf("Enter number :");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}