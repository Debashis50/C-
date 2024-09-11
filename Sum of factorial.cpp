#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;

    cout<<"enter the value of, n:";
    cin>>num;

    while(num>0)

    {
        sum=sum+num;
        num--;
    }
    cout<<"the sum of n numbers are:"<<sum;
    return 0;
}

