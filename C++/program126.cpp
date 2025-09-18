#include<iostream>
using namespace std;

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    cout<<"Elements of array are "<<'\n';

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<'\n';
    }
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

    Display(ptr,iLength);

    delete [] ptr;
    return 0;
}