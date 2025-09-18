#include<iostream>
using namespace std;

void Display(int ptr[], int iSize)
{
    cout<<"Elements of array "<<'\n';
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<ptr[iCnt]<<'\n';
    }

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