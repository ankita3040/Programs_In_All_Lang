
/*
    a a a a
    B B B B
    c c c c
    D D D D

*/

#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow;
        int iCol;
    public:
        Pattern(int Row, int Col)
        {
            iRow = Row;
            iCol = Col;
        }

        void Display()
        {
            int j = 0, i = 0;
            char ch1 = 'a';
            char ch2 = 'A';
    
            for(i = 1, ch1 = 'a', ch2 = 'A' ; i <= iRow; i++, ch1++, ch2++)
            {
                for(j = 1; j <= iCol; j++)
                {
                    if((i % 2) == 0)
                    {
                        cout<<ch2<<'\t';
                    }
                    else
                    {
                        cout<<ch1<<'\t';
                    }
                    
                }
                cout<<'\n';
            }

        }
};

int main()
{

    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter rows "<<'\n';
    cin>>iValue1;

    cout<<"Enter column "<<'\n';
    cin>>iValue2;

    Pattern pobj(iValue1,iValue2);
    pobj.Display();

    return 0;
}