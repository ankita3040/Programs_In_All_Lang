

#include<stdio.h>

int CountFrequency(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    
    int iCount =0, iDigit = 0;

    while(iNo > 0)
    {   
        iDigit = iNo % 10;
        if(iDigit == 5)
        {
            iCount++;
        }
     
        iNo = iNo / 10;
        
    }
    
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = CountFrequency(iValue);

    printf("The frequency of 5 is : %d\n",iRet);

    return 0;
}