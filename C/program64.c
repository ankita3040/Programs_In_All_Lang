#include<stdio.h>


void SumFactorNonFactor(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }

    int iCnt = 0, iSum1 = 0, iSum2 = 0 ;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum1 = iSum1 + iCnt;  
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }

    }

    printf("Summation of Factor is %d\n",iSum2);
    printf("Summation of Non Factor is %d\n",iSum1);
}

int main()
{
    int iValue = 0;
   
    printf("Enter number :");
    scanf("%d",&iValue);

    SumFactorNonFactor(iValue);

    return 0;
}