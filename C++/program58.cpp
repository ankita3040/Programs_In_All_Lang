#include<iostream>
using namespace std;

class Digits
{
    private:
        int iNo;
    public:
        Digits(int No)
        {
            iNo = No;
        }

        void DisplayEvenDigit()
        {
            cout<<"Even digits are "<<'\n';
            int iDigit = 0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if((iDigit % 2) == 0)
                {
                    cout<<iDigit<<'\n';
                }
                iNo = iNo / 10;
            }

        }

};

int main()
{
    int iValue = 0;

    cout<<"Enter number"<<'\n';
    cin>>iValue;

    Digits dobj(iValue);
    dobj.DisplayEvenDigit();

    return 0;
}