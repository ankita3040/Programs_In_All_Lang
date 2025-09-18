#include<iostream>
using namespace std;

int Summation(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
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

    iRet = Summation(ptr,iLength);
    cout<<"Summation of array elements is "<<iRet<<'\n';

    delete [] ptr;
    return 0;
}