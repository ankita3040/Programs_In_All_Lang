#include<iostream>
using namespace std;

bool Search(int Arr[], int iSize)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] ==  5))
        {
            bFlag = true;
        }
    }

    return bFlag;
}

int main()
{
    int iLength = 0, iCnt = 0;
    bool bRet = false;
    int *ptr = NULL;

    cout<<"Enter number of elements "<<'\n';
    cin>>iLength;

    ptr = new int[iLength];

    if(NULL == ptr)
    {
        cout<<"Unable to allocate memory"<<'\n';
        return -1;
    }

    cout<<"Enter array elements "<<'\n';
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    bRet = Search(ptr,iLength);
    
    if(bRet == true)
    {
        cout<<"Element found"<<'\n';
    }
    else
    {
        cout<<"Element not found"<<'\n';
    }

    delete [] ptr;
    return 0;
}