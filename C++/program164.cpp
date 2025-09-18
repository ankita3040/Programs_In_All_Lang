#include<iostream>
using namespace std;

void Display(char str[])
{
  for( ; *str != '\0'; str++)
  {
    cout<<*str;
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