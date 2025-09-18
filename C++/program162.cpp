#include<iostream>
using namespace std;

void Display(char str[])
{
  cout<<str[0]<<'\n';
  cout<<str[1]<<'\n';
  cout<<str[2]<<'\n';
  cout<<str[3]<<'\n';
  cout<<str[4]<<'\n';

}


int main()
{
    char Arr[50] = {'\0'};

    cout<<"Enter string"<<'\n';
    cin>>Arr;

    Display(Arr);
    return 0;
}