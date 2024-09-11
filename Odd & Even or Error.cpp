#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"enter the number :";
    if(!(cin>>num))
    {
        cout<<"Error .";
        return 0;
    }

    if(num%2!=0)
    {
        cout<<"the number is odd .";
    }
    else{
        cout<<"the number is even .";
    }
    return 0;

}
