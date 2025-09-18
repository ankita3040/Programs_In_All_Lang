#include<iostream>
using namespace std;

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;
  
    iMax = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]  > iMax))
        {
           iMax = Arr[iCnt];
        }
    }

    return iMax;
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

    iRet = Maximum(ptr,iLength);
   
    cout<<"Maximum number from array is "<<iRet<<'\n';

    delete [] ptr;
    return 0;
}