#include<iostream>
using namespace std;

class Arithmetic
{
    public: 
        int iNo1, iNo2;

        Arithmetic(int No1, int No2)
        {
            iNo1 = No1;
            iNo2 = No2;

        }
        int Addition()
        {
            int iAns = 0;
            iAns = iNo1 + iNo2;
    
            return iAns;
        }

};


int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    cout<<"Enter first number "<<'\n';
    cin>>iValue1;

    cout<<"Enter second number "<<'\n';
    cin>>iValue2;

    Arithmetic aobj(iValue1,iValue2) ;

    iRet = aobj.Addition();    

    cout<<"Addition is "<<iRet<<'\n' ;
    return 0;
}