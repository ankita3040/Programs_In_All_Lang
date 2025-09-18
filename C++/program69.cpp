
// Input : 4
// Output: 1 2 3 4


#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<iCnt<<'\n';
    }

}

int main()
{
    int iValue = 0;

    cout<<"Enter number "<<'\n';
    cin>>iValue;


    Display(iValue);

    return 0;
}