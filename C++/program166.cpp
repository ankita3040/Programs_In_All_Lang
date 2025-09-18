#include<iostream>
using namespace std;

int strLengthX(char str[])
{
  int iCnt = 0, iCount = 0;
  for(iCnt = 0 ; str[iCnt] != '\0'; str++)
  {
    iCount++;
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