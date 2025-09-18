#include<iostream>
using namespace std;

bool CheckSmall(char ch)
{
    bool bFlag = false;

    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = CheckSmall(cValue);

    if(bRet == true)
    {
        cout<<"charcter is small"<<'\n';
    }
    else
    {
        cout<<"charcter is not small"<<'\n';
    }
    return 0;
}