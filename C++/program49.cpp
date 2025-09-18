#include<iostream>
using namespace std;

class Even
{
    private: 
        int iNo;

    public:
        Even(int No)
        {
            iNo = No;

        }
        bool CheckEven()
        {
            bool bflag = false;
           if((iNo % 2) == 0)
           {
                bflag = true;
           }

           return bflag;
        }



};


int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter  number "<<'\n';
    cin>>iValue;

    Even aobj(iValue) ;

    bRet = aobj.CheckEven();  
    
    if(bRet == true)
    {
        cout<<"Number is even "<<'\n' ;
    }
    else
    {
        cout<<"Number is  not even "<<'\n' ;
    }

   
    return 0;
}