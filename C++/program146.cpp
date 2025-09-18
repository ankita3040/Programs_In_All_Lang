#include<iostream>
using namespace std;

bool CheckCapital(char ch)
{

    if((ch >= 'A') && (ch <= 'Z'))
    {
       return true;
    }
    else
    {
        return false;
    }
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