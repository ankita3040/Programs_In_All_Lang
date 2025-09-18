// Input : 4
// Output: -4 -3 -2 -1 0


#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    
    for(iCnt = -iNo; iCnt <= 0; iCnt++) 
    {
        cout<<iCnt<<'\t';
    }
    
    cout<<"\n";

}

int main()
{
    int iValue = 0;

    cout<<"Enter number "<<'\n';
    cin>>iValue;


    Display(iValue);

    return 0;
}