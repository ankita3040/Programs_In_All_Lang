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

        
        int CountEvenDigit()
        {
            int iDigit = 0, iCount = 0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if((iDigit % 2) == 0)
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
    int iValue = 0, iRet = 0;

    cout<<"Enter number"<<'\n';
    cin>>iValue;

    Digit dobj(iValue);
    iRet = dobj.CountEvenDigit();

    cout<<"Number even of digits are "<<iRet<<'\n';

    return 0;
}