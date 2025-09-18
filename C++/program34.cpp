
/*
    Input : 28 
    Output: (3 4 7 14)  
*/
#include<iostream>
using namespace std;

bool CheckPrime(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;

    for(iCnt = 2; iCnt < iNo/2; iCnt++)
    {
       if((iNo % iCnt ) == 0)
       {
            break;
       }
       
    }

    if(iCnt > (iNo / 2))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number"<<'\n';
    cin>>iValue;

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is prime number "<<'\n';
    }
    else
    {
        cout<<iValue<<" is  not prime number "<<'\n';
    }

    return 0;
}   