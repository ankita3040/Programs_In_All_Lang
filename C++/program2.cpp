// Used to calculate percentage

#include<iostream>
using namespace std;

int main()
{
    int Total = 400;
    int Obtained = 200;
    float percentage = 0.0f;

    percentage = ((float) Obtained / (float) Total )* 100;

    cout<<"Percentage is :"<<percentage<<endl;

    return 0;
}