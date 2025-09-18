#include<iostream>
using namespace std;

class FactorNonFactor
{
    private: 
        int iNo;

    public:
        FactorNonFactor(int No)
        {
            iNo = No;

        }
        void DisplayFactor()
        {
            int iCnt = 0;

            cout<<"Factor are : "<<'\n';
        
            for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
            {
                if((iNo % iCnt) == 0)
                {
                    cout<<iCnt<<'\n';
                }
            }
        }

        void DisplayNonFactor()
        {
            if(iNo < 0)
            {
                iNo = -iNo;
            }
            int iCnt = 0;
        
            cout<<"NonFactor are : "<<'\n';
            
            for(iCnt = 1; iCnt < iNo ; iCnt++)
            {
                if((iNo % iCnt) != 0)
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

    FactorNonFactor fobj(iValue);
    fobj.DisplayFactor();
    fobj.DisplayNonFactor();

    return 0;
}