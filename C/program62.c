#include<stdio.h>


void DisplayNonFactor(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }

    int iCnt = 0;

    printf("Fcators are :\n");
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
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

    DisplayNonFactor(iValue);

    return 0;
}