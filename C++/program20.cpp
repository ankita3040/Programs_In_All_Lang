
#include<iostream>
using namespace std;



int Summation(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;   
       
    }

    return iSum;
  
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number"<<'\n';
    cin>>iValue;

    iRet = Summation(iValue);

    cout<<"Sum is : "<<iRet<<'\n';

    return 0;
}  