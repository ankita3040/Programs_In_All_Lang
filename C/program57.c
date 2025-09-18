#include<stdio.h>

int Addition(int iNo1 , int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;
    printf("Addition is %d\n",iAns);
}

int Subtraction(int iNo1 , int iNo2)
{
    int iAns = 0;
    iAns = iNo1 - iNo2;
    printf("Subtraction is %d\n",iAns);
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter first number ");
    scanf("%d",&iValue1);

    printf("Enter second number ");
    scanf("%d",&iValue2);

    
    return 0;
}