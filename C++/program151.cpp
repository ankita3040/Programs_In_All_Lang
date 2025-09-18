#include<iostream>
using namespace std;

bool CheckDigit(char ch)
{
    bool bFlag = false;

    if((ch >= '0') && (ch <= '9'))
    {
        bFlag = true;
    }

    return bFlag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    cout<<"Enter charcter"<<'\n';
    cin>>cValue;

    bRet = CheckDigit(cValue);

    if(bRet == true)
    {
        cout<<"you are enetred digit"<<'\n';
    }
    else
    {
        cout<<"you are not enetred digit"<<'\n';
    }
    return 0;
}