
/*
    Input : 10
    Output: 7
*/
#include<iostream>
using namespace std;

int SumFactor(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0, iSum = 0;

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if(((iNo % iCnt) == 0))
        {
            iSum = iSum + iCnt;   
        }
       
    }

    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number"<<'\n';
    cin>>iValue;

    iRet = SumFactor(iValue);

    cout<<"Sum of factor is : "<<iRet<<'\n';

    return 0;
}