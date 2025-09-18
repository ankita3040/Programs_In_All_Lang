#include<iostream>
using namespace std;

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;
  

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] ==  iNo))
        {
           iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0, iRet = 0;
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

    iRet = Frequency(ptr,iLength,iValue);
   
    cout<<"Number of time "<<iValue<<"occurs in array is "<<iRet<<'\n';

    delete [] ptr;
    return 0;
}