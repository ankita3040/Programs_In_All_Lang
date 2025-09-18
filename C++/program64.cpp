#include<iostream>
using namespace std;

int DisplayReverse(int iNo)
{
    int iDigit = 0, iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    return iRev;

}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number"<<'\n';
    cin>>iValue;

    iRet = DisplayReverse(iValue);

    cout<<"Reverse number is : "<<iRet<<'\n';

    return 0;

}