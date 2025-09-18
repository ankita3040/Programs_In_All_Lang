#include<iostream>
using namespace std;

void Display(char str[])
{
  int iCnt = 0;
  for(iCnt = 0 ; str[iCnt] != '\0'; str++)
  {
    cout<<str[iCnt];
  }
  cout<<'\n';
}


int main()
{
    char Arr[50] = {'\0'};

    cout<<"Enter string"<<'\n';
    cin>>Arr;

    Display(Arr);
    return 0;
}