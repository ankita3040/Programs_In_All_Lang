#include<iostream>
using namespace std;

int main()
{
    int iNo = 751;
    int iDigit = 0;

    iDigit = iNo % 10;
    cout<<"Updated digit is "<<iDigit<<'\n';
    iNo = iNo / 10;

    iDigit = iNo % 10;
    cout<<"Updated digit is "<<iDigit<<'\n';
    iNo = iNo / 10;

    iDigit = iNo % 10;
    cout<<"Updated digit is "<<iDigit<<'\n';
    iNo = iNo / 10;

    return 0;
}