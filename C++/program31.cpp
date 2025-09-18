
/*
    Input : 28 
    Output: (3 4 7 14)  
*/
#include<iostream>
using namespace std;

bool CheckPerfect(int iNo)
{
    
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if(((iNo % iCnt) == 0))
        {
            iSum = iSum + iCnt;   
        }
       
    }

    if(iSum == iNo)
    {
        return  true;
    }
    else
    {
        return false;
    }        
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number"<<'\n';
    cin>>iValue;

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is perfect number "<<'\n';
    }
    else
    {
        cout<<iValue<<" is  not perfect number "<<'\n';
    }

    

    return 0;
}