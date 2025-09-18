
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
    bool bFlag = true;

    for(iCnt = 2; iCnt < iNo/2; iCnt++)
    {
       if((iNo % iCnt ) == 0)
       {
            bFlag = false;
            break;
       }
       
    }

   return bFlag;
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