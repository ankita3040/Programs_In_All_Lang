
/*
    Input : 10
    Output: 2 5 10
            3 4 6 7 8 9 
*/
#include<iostream>
using namespace std;

void DisplayFactorNonFactor(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            cout<<"Factor is  : "<<iCnt<<'\n';
        }
        else
        {
            cout<<"Non factor is :"<<iCnt<<'\n';
        }
    }
}
int main()
{
    int iValue = 0;

    cout<<"Enter number"<<'\n';
    cin>>iValue;

    DisplayFactorNonFactor(iValue);

    return 0;
}