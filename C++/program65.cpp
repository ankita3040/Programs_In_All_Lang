#include<iostream>
using namespace std;

class Reverse
{
    private:
        int iNo;
    public:
        Reverse(int No)
        {
            if(No < 0)
            {
                No = -No;
            }

            iNo = No;

        }

        int DisplayReverse()
        {
            int iDigit = 0, iRev = 0;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iRev = (iRev * 10) + iDigit;
                iNo = iNo / 10;
            }

            return iRev;
        }
};

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number"<<'\n';
    cin>>iValue;

    Reverse robj(iValue);
    iRet = robj.DisplayReverse();

    cout<<"Reverse number is :  "<<iRet<<'\n';

    return 0;

}