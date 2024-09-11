#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3,small;

    cout<<"enter three numbers:";
    cin>>num1>>num2>>num3;

    if(num1<num2 && num1<num3)
    {
        cout<<"smallest number is:"<<num1<<endl;
        small=num1;
    }

    else if(num2<num1 && num2<num3)
    {
        cout<<"smallest number is:"<<num2<<endl;
        small=num2;
    }

    else{
        cout<<"smallest number is:"<<num3<<endl;
        small=num3;
    }
    if(small%2==0)
    {
        cout<<"the number is even.";
    }

    else{
        cout<<"the number is odd.";
    }
    return 0;

}
