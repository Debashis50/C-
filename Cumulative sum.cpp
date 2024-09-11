#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;

    cout<<"enter the numbers :";

    for( num=0;num<=10;num++)
    {
        cin>>num;
        sum=sum+num;

        cout<<"sum of the numbers."<<sum<<endl;
    }
    return 0;
}
