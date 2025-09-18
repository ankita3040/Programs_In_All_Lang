
#include<iostream>
using namespace std;


bool DivisbleByFiveThree(int iNo)
{
    bool bflag =  false;

    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        bflag = true;
    }
    
    return  bflag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number to check the number is divisible by 3 and 5 or not"<<'\n';
    cin>>iValue;

    bRet = DivisbleByFiveThree(iValue);

    if(bRet == true)
    {
        cout<<"Divisble by 3 and 5 "<<'\n';
    }
    else
    {
        cout<<"Not divisible 3 and 5  "<<'\n';
    }

    return 0;
}  