#include<iostream>
using namespace std;
int main()
{
    int Arr[5] = { '\0'};
    int iCnt = 0;

    cout<<"Enter array elements "<<'\n';

    cin>>Arr[0];
    cin>>Arr[1];
    cin>>Arr[2];
    cin>>Arr[3];
    cin>>Arr[4];

    cout<<"Elements from array are "<<'\n';
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<Arr[iCnt] <<'\n';
    }
    
    return 0;
}