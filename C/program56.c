#include<stdio.h>

int Subtraction(int iNo1 , int iNo2)
{
    int iAns = 0;
    iAns = iNo1 - iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter first number ");
    scanf("%d",&iValue1);

    printf("Enter second number ");
    scanf("%d",&iValue2);

    iRet = Subtraction(iValue1,iValue2);

    printf("Subtraction is %d\n",iRet);

    return 0;
}