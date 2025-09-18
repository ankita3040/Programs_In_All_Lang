#include<iostream>
using namespace std;

bool CheckCapital(char ch)
{
    bool bFlag = false;

    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        cout<<"charcter is capital"<<'\n';
    }
    else
    {
        cout<<"charcter is not capital"<<'\n';
    }
    return 0;
}