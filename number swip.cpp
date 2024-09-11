#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,t;
    cout<<"enter the numbers :";
    cin>>n1>>n2>>n3;

    t=n1;
    n1=n2;
    n2=n3;
    n3=t;

    cout<<n1<<endl;
    cout<<n2<<endl;
    cout<<n3;
    return 0;
}


