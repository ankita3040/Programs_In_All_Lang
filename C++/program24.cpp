
#include<iostream>
using namespace std;

#define INVALID_ERR -1

unsigned long Factorial(unsigned int iNo)
{
    if(iNo < 0)
    {
        return INVALID_ERR;
    }
    int iCnt = 0;
    unsigned long iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;   
       
    }

    return iFact;
  
}

int main()
{
    unsigned int iValue = 0; 
    unsigned long int iRet = 0;

    cout<<"Enter number to get factorial of that number"<<'\n';
    cin>>iValue;

    iRet = Factorial(iValue);

    if(iRet == INVALID_ERR)
    {
        cout<<"Invalid Input"<<'\n';
    }
    else
    {
        cout<<"Factorial is : "<<iRet<<'\n';
    }


    return 0;
}  