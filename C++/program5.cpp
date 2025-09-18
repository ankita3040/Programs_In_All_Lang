/*
    start
         Accept percentage from user
            if percentage is less tha 0 and greater than 100
                Display as invalid input
            if percentage is greater than 0 and less than 35
                Display as fail
            if percentage is greater than 35 and less than 50
                Display as pass
            if percentage is greater than 50 and less than 60
                Display as second class
            if percentage is greater than 60 and less than 70
                Display as first class
            if percentage is greater than 70 and less than 100
                Display as first class with distinction
    Stop
*/

#include<iostream>
using namespace std;

void DisplayClass(float perc)
{
    if ((perc <= 0.0f) && (perc > 100.0f))
    {
        cout<<"Invalid Input"<<'\n';
    }
    else if((perc > 0.0f) && (perc < 35.0f))
    {
        cout<<"Fail"<<'\n';
    }
    else if((perc >= 35.0f) && (perc < 50.0f))
    { 
        cout<<"Pass"<<'\n';
    }
    else if((perc >= 50.0f) && (perc < 60.0f))
    {
        cout<<"Second class"<<'\n';
    }
    
    else if((perc >= 60.0f) && (perc <  70.0f))
    {
        cout<<"First class"<<'\n';
    }
    
    else if((perc >= 70.0f) && (perc <= 100.0f))
    {
        cout<<"First class with distinction"<<'\n';
    }
    


}

int main()
{
    float percentage = 0.0f;

    cout<<"Enter percentage :"<<'\n';
    cin>>percentage;

    DisplayClass(percentage);

    return 0;
}
