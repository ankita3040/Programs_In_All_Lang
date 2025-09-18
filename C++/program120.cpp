#include<iostream>
using namespace std;

void Display(int *ptr, int iSize)
{
    cout<<"Elements of array "<<'\n';
    cout<<ptr[0]<<'\n';
    cout<<ptr[1]<<'\n';
    cout<<ptr[2]<<'\n';
    cout<<ptr[3]<<'\n';
    cout<<ptr[4]<<'\n';

}
int main()
{
    int Arr[5] = { '\0'};
    int iCnt = 0;

    cout<<"Enter array elements "<<'\n';
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    Display(Arr,5); // Arr = 100(base address)
    return 0;
}