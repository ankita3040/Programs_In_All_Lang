#include<iostream>
using namespace std;

void Display(std::string str)
{
    cout<<"Your entred string is  "<<str<<'\n';
}


int main()
{
    std::string str = {'\0'};

    cout<<"Enter string"<<'\n';
    std::cin>>str;

    Display(str);
    return 0;
}