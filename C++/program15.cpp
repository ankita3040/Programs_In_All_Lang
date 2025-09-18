
#include<iostream>
using namespace std;


bool CheckEven(int iNo)
{
    bool bflag =  false;

    if((iNo % 2) == 0)
    {
        bflag = true;
    }
    
    return  bflag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number to check the number is even or not"<<'\n';
    cin>>iValue;

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        cout<<"Number is Even  "<<'\n';
    }
    else
    {
        cout<<"Number is Odd  "<<'\n';
    }

    

    return 0;
}  