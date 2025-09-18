#include<iostream>
using namespace std;

int CountSmall(char *str)
{
  if(str == NULL)
  {
    return -1;
  }
  
   int iCount = 0;
   while(*str != '\0')
   {
     if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(Arr);

    cout<<"Number of small letters are "<<iRet<<'\n';
    return 0;
}