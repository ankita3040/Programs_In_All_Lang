
/*
    start
        Call display function
    stop
*/

#include<iostream>
using namespace std;


//Iteration

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<iNo<<'\n';
    }
  
}

int main()
{
    int iValue = 0;

    cout<<"Enter value to be displayed "<<'\n';
    cin>>iValue;

    Display(iValue);
    return 0;
}  