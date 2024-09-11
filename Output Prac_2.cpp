#include<iostream>
using namespace std;
int main()
{
    int arr[5]={11,9,13,7,15};
    int p=arr[4];
    int q=p++;
    int r=arr[5-2]+2;
    double x=(double)q/p;

    cout<<(float)p/r<<endl;
    cout<<r<<endl;
    cout<<q<<endl;
    cout<<arr[2-2]<<endl;
    cout<<p++<<endl;
    cout<<q-p<<endl;
    cout<<(int)x<<endl;
    cout<<--r<<endl;
    cout<<p-r*2<<endl;
    cout<<"r+x"<<endl;



    return 0;
}
