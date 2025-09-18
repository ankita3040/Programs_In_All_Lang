#include<iostream>
using namespace std;

int CountEvenDigit(int iNo)
{
    int iDigit = 0, iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;

}

int main()
{
    int iValue= 0, iRet = 0;

    cout<<"Enter number"<<'\n';
    cin>>iValue;

    iRet = CountEvenDigit(iValue);

    cout<<"Number of even digits are "<<iRet<<'\n';

    return 0;
}