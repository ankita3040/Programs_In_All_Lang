#include<iostream>
using namespace std;

int Minimum(int Arr[], int iSize)
{
    if((Arr == NULL) || (iSize <= 0))
    {
        cout<<"Invalid input";
        return -1;
    }
    int iCnt = 0, iMin = 0;
  
    iMin = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]  < iMin)) 
        {
           iMin = Arr[iCnt];
        }
    }

    return iMin;
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

    iRet = Minimum(ptr,iLength);
   
    cout<<"Minimum number from array is "<<iRet<<'\n';

    delete [] ptr;
    return 0;
}