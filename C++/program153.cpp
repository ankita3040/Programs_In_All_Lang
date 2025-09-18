#include<iostream>
using namespace std;


int main()
{
    std::string str = {'\0'};

    cout<<"Enter string"<<'\n';
    std::cin>>str;

    cout<<"Your entred string is  "<<str<<'\n';
    return 0;
}