#include<iostream>
using namespace std;

bool Search(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iSum = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] ==  iNo))
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;;
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

    cout<<"Enter element to search"<<'\n';
    cin>>iValue;

    bRet = Search(ptr,iLength,iValue);
    
    if(bRet == true)
    {
        cout<<"Element is present in array"<<'\n';
    }
    else
    {
        cout<<"Element is not present in array"<<'\n';
    }

    delete [] ptr;
    return 0;
}