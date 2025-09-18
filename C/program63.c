#include<stdio.h>


int SumNonFactor(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }

    int iCnt = 0, iSum = 0 ;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
          iSum = iSum + iCnt;  
        }

    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
   
    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = SumNonFactor(iValue);

    printf("Summation of Non factor is %d\n",iRet);

    return 0;
}