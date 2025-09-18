#include<iostream>
using namespace std;

void strlwrx(char *str)
{
   while(*str != '\0')
   {
     if((*str >= 'A') && (*str <= 'Z')) 
     {
       *str = *str + ('a' - 'A');
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

    strlwrx(Arr);

    cout<<"Updated string is "<<Arr<<'\n';

    return 0;
}