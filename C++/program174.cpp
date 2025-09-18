#include<iostream>
using namespace std;

void CountCapitalSmallDigit(char *str)
{
  if(str == NULL)
  {
    return ;
  }
  
   int iCountCap = 0, iCountSmall = 0, iDigit = 0;
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
     else if((*str >= '0') && (*str <= '9'))
     {
        iDigit++;
     }
     str++;
   } 
   
   cout<<"Number of capital letters are "<<iCountCap<<'\n';
   cout<<"Number of small letters are "<<iCountSmall<<'\n';
   cout<<"Number of digits are "<<iDigit<<'\n';


}


int main()
{
    char Arr[50] = {'\0'};

    cout<<"Enter string"<<'\n';
    cin>>Arr;

    CountCapitalSmallDigit(Arr);

    return 0;
}