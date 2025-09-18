#include<iostream>
using namespace std;

class Digit
{
    private:
        int iNo;
    public:
        Digit(int No)
        {
            if(No < 0)
            {
                No = -No;
            }
            iNo = No;
        }

        
        int CountDigit()
        {
            int iDigit = 0, iCount = 0;

            while(iNo != 0)
            {
                iCount++;
                iNo = iNo / 10;
            }

            return iCount;

        }
};
int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number"<<'\n';
    cin>>iValue;

    Digit dobj(iValue);
    iRet = dobj.CountDigit();

    cout<<"Number of digits are "<<iRet<<'\n';

    return 0;
}