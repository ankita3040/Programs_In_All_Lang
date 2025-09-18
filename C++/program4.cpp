// Accept values from user then calculate percentage 

#include<iostream>
using namespace std;

float CalculatePercentage(int total, int obtained)
{
    float percentage = 0.0f;
    percentage = ((float) obtained / (float) total )* 100;

    return percentage;

}

int main()
{
    int Total = 0;
    int Obtained = 0;
    float fRet = 0.0f;

    cout<<"Enter total marks  "<<'\n';
    cin>>Total;

    cout<<"Enter obtained marks "<<'\n';
    cin>>Obtained;

    fRet = CalculatePercentage(Total,Obtained);

    cout<<"Percentage is :"<<fRet<<'\n';
    return 0;
}