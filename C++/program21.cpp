
#include<iostream>
using namespace std;



int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;   
       
    }

    return iFact;
  
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number to get factorial of that number"<<'\n';
    cin>>iValue;

    iRet = Factorial(iValue);

    cout<<"Factorial is : "<<iRet<<'\n';

    return 0;
}  