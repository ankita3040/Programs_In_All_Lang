#include<iostream>
using namespace std;

class NonFactor
{
    private: 
        int iNo;

    public:
        NonFactor(int No)
        {
            iNo = No;

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

    NonFactor fobj(iValue);
    fobj.DisplayNonFactor();

    return 0;
}