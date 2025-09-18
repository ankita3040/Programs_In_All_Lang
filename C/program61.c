#include<stdio.h>


int SumFactor(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }

    int iCnt = 0, iSum = 0 ;

    printf("Fcators are :\n");
    for(iCnt = 1; iCnt < iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
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

    iRet = SumFactor(iValue);

    printf("Summation o factor is %d\n",iRet);

    return 0;
}