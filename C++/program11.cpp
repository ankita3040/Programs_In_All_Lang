
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

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        cout<<"Hello world"<<'\n';
    }
  
}

int main()
{
    int iValue = 0;

    cout<<"Enter frequency"<<'\n';
    cin>>iValue;

    Display(iValue);
    return 0;
}  