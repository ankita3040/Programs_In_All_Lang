#include<iostream>
using namespace std;

class Factor
{
    private: 
        int iNo;

    public:
        Factor(int No)
        {
            iNo = No;

        }
        void DisplayFactor()
        {
            if(iNo < 0)
            {
                iNo = -iNo;
            }
            int iCnt = 0;
        
            for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
            {
                if((iNo % iCnt) == 0)
                {
                    cout<<iCnt<<'\n';
                }
            }
        }

};


int main()
{
    int iValue = 0;

    cout<<"Enter  number "<<'\n';
    cin>>iValue;

    Factor fobj(iValue);
    fobj.DisplayFactor();

    return 0;
}