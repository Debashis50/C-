#include<iostream>
using namespace std;
int main()
{
    int num,nm,mn;

    cout<<"enter three numbers : ";
    cin>>num>>nm>>mn;

    if(num>nm && num>mn)
    {
        cout<<"large number :"<<num;
    }
    else if(nm>num && nm>mn)
    {
        cout<<"large number :"<<nm;
    }
    else {
        cout<<"large number :"<<mn;
    }
    return 0;
}
