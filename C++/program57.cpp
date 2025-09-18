#include<iostream>
using namespace std;

class Digit
{
    private:
        int iNo;
    public:
        Digit(int No)
        {
            iNo = No;
        }

        
        void DisplayDigit()
        {
            cout<<"Digits are "<<'\n';
            int iDigit = 0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                cout<<iDigit<<'\n';
                iNo = iNo / 10;
            }

        }
};
int main()
{
    int iValue = 0;

    cout<<"Enter number"<<'\n';
    cin>>iValue;

    Digit dobj(iValue);
    dobj.DisplayDigit();

    return 0;
}