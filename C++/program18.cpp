
#include<iostream>
using namespace std;


bool DivisbleByFive(int iNo)
{
   return (((iNo % 5) == 0));
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number to check the number is divisible by 5 or not"<<'\n';
    cin>>iValue;

    bRet = DivisbleByFive(iValue);

    if(bRet == true)
    {
        cout<<"Divisble by 5 "<<'\n';
    }
    else
    {
        cout<<"Not divisible by 5  "<<'\n';
    }

    return 0;
}  