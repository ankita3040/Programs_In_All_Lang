#include<iostream>
using namespace std;
int main()
{
    int Arr[5] = { '\0'};
    int iCnt = 0;

    cout<<"Enter array elements "<<'\n';
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    

    cout<<"Elements from array are "<<'\n';
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<Arr[iCnt] <<'\n';
    }
    
    return 0;
}