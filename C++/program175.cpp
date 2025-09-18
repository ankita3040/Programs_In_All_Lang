#include<iostream>
using namespace std;

int CountSpace(char *str)
{
  if(str == NULL)
  {
    return -1;
  }
  
   int iCount = 0;
   while(*str != '\0')
   {
     if(*str == ' ') 
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
    cin.getline(Arr,50);

    iRet = CountSpace(Arr);

    cout<<"Number of spaces available is "<<iRet<<'\n';

    return 0;
}