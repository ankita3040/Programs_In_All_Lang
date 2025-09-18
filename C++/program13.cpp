
#include<iostream>
using namespace std;


//Iteration

int Sum(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        iSum = iSum + iCnt;   
       
    }

    return iSum;
  
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter frequency"<<'\n';
    cin>>iValue;

    iRet = Sum(iValue);

    cout<<"Sum is : "<<iRet<<'\n';

    return 0;
}  