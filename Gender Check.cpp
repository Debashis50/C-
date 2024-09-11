
#include<iostream>
using namespace std;
int main()
{
    char gender;
    cout<<"enter the input:";
    cin>>gender;

        if(gender=='M'|| gender=='m')

    {
        cout<<"Male.";
    }
    else if(gender=='F'|| gender=='f')
    {
        cout<<"Female.";
    }
    else{
        cout<<"undefined.";
    }
    return 0;
}




