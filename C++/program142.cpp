#include<iostream>
using namespace std;

void MinimumMaximum(int Arr[], int iSize)
{
    if((Arr == NULL) || (iSize <= 0))
    {
        cout<<"Invalid input";
        return ;
    }
    int iCnt = 0, iMin = 0, iMax = 0;
  
    iMax = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]  > iMax))
        {
           iMax = Arr[iCnt];
        }
    }

    iMin = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]  < iMin)) 
        {
           iMin = Arr[iCnt];
        }
    }
    
    cout<<"Maximum element is "<<iMax<<'\n';
    cout<<"Minimum element is" <<iMin<<'\n';
}

int main()
{
    int iLength = 0, iCnt = 0;
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

    MinimumMaximum(ptr,iLength);

    delete [] ptr;
    return 0;
}