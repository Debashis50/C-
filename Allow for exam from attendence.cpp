#include<iostream>
using namespace std;
int main()
{
    double held,attend,percent;


    cout<<"total number of class held:";
    cin>>held;
    cout<<"number of class attrnded:";
    cin>>attend;
    percent=(attend/held)*100;

    cout<<percent<<endl;
    if(percent>=80)
    {
        cout<<percent<<"%"<<"is allowed";
    }
    else{
        cout<<percent<<"%"<<"is not allowed";
    }
    return 0;

}
