
/*
    Input : 10
    Output: 2 
*/
#include<iostream>
using namespace std;

void DisplayEvenFactor(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
        {
            cout<<"Even factor is  : "<<iCnt<<'\n';
        }
       
    }
}
int main()
{
    int iValue = 0;

    cout<<"Enter number"<<'\n';
    cin>>iValue;

    DisplayEvenFactor(iValue);

    return 0;
}