#include<iostream>
using namespace std;

int CountCapital(char *str)
{
  
   int iCount = 0;
   while(*str != '\0')
   {
     if((*str >= 'A') && (*str <= 'Z'))
     {
       iCount++;
     }
     str++;
   } 
   return iCount;
}


int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    cout<<"Enter string"<<'\n';
    cin>>Arr;

    iRet = CountCapital(Arr);

    cout<<"Number of capital letters are "<<iRet<<'\n';
    return 0;
}