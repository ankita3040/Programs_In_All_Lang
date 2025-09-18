//Iteration to Iteration

#include<iostream>
using namespace std;

void Display()
{
    int j = 0, i = 0;
    
    for(i = 0; i < 3; i++)
    {
        for(j =1; j <= 3; j++)
        {
            cout<<"*"<<'\t'; 
        }
        cout<<'\n';
    }
   



}

int main()
{

    Display();

    return 0;
}