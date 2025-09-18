#include<iostream>
using namespace std;

class Digit
{
    private:
        int iNo;
        int iFreq;
    public:
        Digit(int No, int Freq)
        {
            iNo = No;
            iFreq = Freq;
        }

        int frequencyDigit()
        {
            int iDigit = 0, iCount = 0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit == iFreq)
                {
                    iCount++;
                }
                iNo = iNo / 10;
            }

            return iCount;

        }
};
int main()
{
    int iValue = 0, iRet = 0, iFreq = 0;

    cout<<"Enter number "<<'\n';
    cin>>iValue;

    cout<<"Enter digit to get frequency"<<'\n';
    cin>>iFreq;

    Digit dobj(iValue,iFreq);
    iRet = dobj.frequencyDigit();

    cout<<"Number of digits are "<<iRet<<'\n';

    return 0;
}