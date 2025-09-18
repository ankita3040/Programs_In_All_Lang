#include<iostream>
using namespace std;

void CountCapitalSmall(char *str)
{
  if(str == NULL)
  {
    return ;
  }
  
   int iCountCap = 0, iCountSmall = 0;
   while(*str != '\0')
   {
     if((*str >= 'a') && (*str <= 'z'))
     {
        iCountSmall++;
     }
     else if((*str >= 'A') && (*str <= 'Z'))
     {
        iCountCap++;
     }
     str++;
   } 
   
   cout<<"Number of capital letters are "<<iCountCap<<'\n';
   cout<<"Number of small letters are "<<iCountSmall<<'\n';

}


int main()
{
    char Arr[50] = {'\0'};

    cout<<"Enter string"<<'\n';
    cin>>Arr;

    CountCapitalSmall(Arr);

    return 0;
}