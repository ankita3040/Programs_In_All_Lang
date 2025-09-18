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
        int SumFactor()
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

            return iSum;
        }

};


int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter  number "<<'\n';
    cin>>iValue;

    Factor fobj(iValue);
    iRet = fobj.SumFactor();

    cout<<"Sum of factor is "<<iRet<<'\n';

    return 0;
}