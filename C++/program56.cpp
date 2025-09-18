#include<iostream>
using namespace std;

class SumFactorNonFactor
{
    private: 
        int iNo;

    public:
        SumFactorNonFactor(int No)
        {
            iNo = No;

        }
        void SumFactor()
        {
            if(iNo < 0)
            {
                iNo = -iNo;
            }
            int iCnt = 0, iSum = 0;
        
            for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
            {
                if((iNo % iCnt) == 0)
                {
                    iSum = iSum + iCnt;
                }
            }

            cout<<"Sum of factor is :"<<iSum<<'\n';
        }

        void SumNonFactor()
        {
            if(iNo < 0)
            {
                iNo = -iNo;
            }
            int iCnt = 0, iSum = 0;
        
            for(iCnt = 1; iCnt < iNo; iCnt++)
            {
                if((iNo % iCnt) != 0)
                {
                    iSum = iSum + iCnt;
                }
            }

            cout<<"Sum of non factor is :"<<iSum<<'\n';
        }

};


int main()
{
    int iValue = 0;

    cout<<"Enter  number "<<'\n';
    cin>>iValue;

    SumFactorNonFactor fobj(iValue);

    fobj.SumFactor();
    fobj.SumNonFactor();

    return 0;
}