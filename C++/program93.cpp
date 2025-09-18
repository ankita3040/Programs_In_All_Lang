/*
   a a a a
   b b b b
   c c c c 
   d d d d
    
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
            char ch = 'a';
    
            for(i = 1,ch = 'a'; i <= iRow; i++,ch++)
            {
                for(j = 1; j <= iCol; j++)
                {
                    cout<<ch<<'\t';
                    
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