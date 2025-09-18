#include<iostream>
using namespace std;

void Change(char *str)
{
   while(*str != '\0')
   {
     if(*str == 'a') 
     {
       *str = 'A';
     }
     str++;
   }
}


int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    cout<<"Enter string"<<'\n';
    cin.getline(Arr,50);

    Change(Arr);

    cout<<"Updated string is "<<Arr<<'\n';

    return 0;
}