#include<iostream>
using namespace std;

int CountCapital(char str[])
{
  
   int iCount = 0;
   int iCnt = 0;
   while(str[iCnt] != '\0')
   {
     if((str[iCnt] >= 'A') && (str[iCnt] <= 'Z'))
     {
       iCount++;
     }
     iCnt++;
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