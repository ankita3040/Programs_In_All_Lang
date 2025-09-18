#include<stdio.h>

int Digit(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    
    int iCount =0, iDigit = 0;

    while(iNo > 0)
    {   
        //iDigit = iNo % 10;
        iCount++;
        iNo = iNo / 10;
        
    }
    
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = Digit(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}