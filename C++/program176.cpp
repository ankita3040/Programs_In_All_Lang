#include<iostream>
using namespace std;

int CountFrequency(char *str)
{
  if(str == NULL)
  {
    return -1;
  }
  
   int iCount = 0;
   while(*str != '\0')
   {
     if(*str == 'a') 
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

    iRet = CountFrequency(Arr);

    cout<<"Frequency of a in string is  "<<iRet<<'\n';

    return 0;
}