#include<iostream>
using namespace std;

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        cout<<iDigit<<'\n';
        iNo = iNo / 10;
    }

}

int main()
{
    int iValue= 0;

    cout<<"Enter number"<<'\n';
    cin>>iValue;

    DisplayDigit(iValue);

    return 0;
}