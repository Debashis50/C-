#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"enter the number:";
    cin>>num;

    if(num>0)
    {
        cout<<"positive";
    }
    else if(num<0)
    {
        cout<<"negetive";
    }
    else
    {
        cout<<"zero";
    }
    return 0;
}
