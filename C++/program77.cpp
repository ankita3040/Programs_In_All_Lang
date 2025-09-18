// Input : 4 #
// Output: # # # #

// Input : 5 &
// Output: & & & & & 

// Input : 3 z
// Output: z z z

#include<iostream>
using namespace std;

void Display(int iNo, char ch)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iNo; iCnt++)  
    {
        cout<<ch<<'\t';
    }
    
    cout<<"\n";

}

int main()
{
    int iValue = 0;
    char cValue = '\0';

    cout<<"Enter number "<<'\n';
    cin>>iValue;

    cout<<"Enter character"<<'\n';
    cin>>cValue;

    Display(iValue,cValue);

    return 0;
}