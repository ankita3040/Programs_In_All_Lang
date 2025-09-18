#include<stdio.h>

int CountFrequency(int iNo, int iFreq)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    
    int iCount =0, iDigit = 0;

    while(iNo > 0)
    {   
        iDigit = iNo % 10;
        if(iDigit == iFreq)
        {
            iCount++;
        }
     
        iNo = iNo / 10;
        
    }
    
    return iCount;
}

int main()
{
    int iValue = 0, iValue2 = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    printf("Enter number to count frequency :\n");
    scanf("%d",&iValue2);

    iRet = CountFrequency(iValue,iValue2);

    printf("The frequency of %d is : %d\n",iValue2,iRet);

    return 0;
}