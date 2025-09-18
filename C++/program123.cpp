#include<iostream>
using namespace std;

int Summation(int ptr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       iSum = iSum + ptr[iCnt];
    }

    return iSum;

}
int main()
{
    int Arr[5] = { '\0'};
    int iCnt = 0, iRet = 0;

    cout<<"Enter array elements "<<'\n';
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    iRet = Summation(Arr,5); 

    cout<<"Summation of array elements is :"<<iRet<<'\n';
    return 0;
}