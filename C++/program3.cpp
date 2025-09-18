// Accept values from user then calculate percentage 

#include<iostream>
using namespace std;

int main()
{
    int Total = 0;
    int Obtained = 0;
    float percentage = 0.0f;

    cout<<"Enter total marks  "<<'\n';
    cin>>Total;

    cout<<"Enter obtained marks "<<'\n';
    cin>>Obtained;

    percentage = ((float) Obtained / (float) Total )* 100;

    cout<<"Percentage is :"<<percentage<<endl;

    return 0;
}