#include<iostream>
using namespace std;

int SumOfDigit(int iNo)
{
    int iDigit = 0, iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;

}

int main()
{
    int iValue= 0, iRet = 0;

    cout<<"Enter number"<<'\n';
    cin>>iValue;

    iRet = SumOfDigit(iValue);

    cout<<"Sum of digit is "<<iRet<<'\n';

    return 0;
}