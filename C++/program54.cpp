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
        int SumNonFactor()
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

            return iSum;
        }

};


int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter  number "<<'\n';
    cin>>iValue;

    NonFactor fobj(iValue);
    iRet = fobj.SumNonFactor();

    cout<<"Sum of Nonfactor is "<<iRet<<'\n';

    return 0;
}