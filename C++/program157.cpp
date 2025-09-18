#include<iostream>
using namespace std;

int strLengthX(char *str)
{
  
   int iCount = 0;
   while(*str != '\0')
   {
     iCount++;
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

    iRet = strLengthX(Arr);

    cout<<"Length of string is "<<iRet<<'\n';
    return 0;
}