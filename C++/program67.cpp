
// Input : 4
// Output: * * * *

/*
    start 
        Accept the frequency
        Iteratate from 1 to that frequency
            Display * on screen
        continue
    stop
*/
// Time complexity O(N)
//N is a natural number
// Where N >= 0 and N <= Infinity

#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        cout<<"*\t";
    }
    cout<<'\n';

}

int main()
{
    int iValue = 0;

    cout<<"Enter number "<<'\n';
    cin>>iValue;


    Display(iValue);

    return 0;
}