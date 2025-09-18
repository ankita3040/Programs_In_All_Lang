#include<iostream>
using namespace std;

void Display(char str[])
{
  while(*str != '\0')
  {
    cout<<*str<<'\n';
    str++;
  } 

}


int main()
{
    char Arr[50] = {'\0'};

    cout<<"Enter string"<<'\n';
    cin>>Arr;

    Display(Arr);
    return 0;
}