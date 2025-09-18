#include<iostream>
using namespace std;

int main()
{
    int iLength = 0;
    int *ptr = NULL;

    cout<<"Enter number of elements "<<'\n';
    cin>>iLength;

    ptr = new int[iLength];

    if(NULL == ptr)
    {
        cout<<"Unable to allocate memory"<<'\n';
        return -1;
    }


    delete [] ptr;
    return 0;
}