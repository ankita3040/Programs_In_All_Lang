// Input : 4
// Output :
/*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/

#include<iostream>
using namespace std;

void Display(int iRow, int iCol)
{
    int j = 0, i = 0;
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            cout<<j<<'\t'; 
        }
        cout<<'\n';
    }

}

int main()
{

    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter rows "<<'\n';
    cin>>iValue1;

    cout<<"Enter column "<<'\n';
    cin>>iValue2;

    Display(iValue1,iValue2);

    return 0;
}