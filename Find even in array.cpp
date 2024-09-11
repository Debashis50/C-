#include<iostream>
using namespace std;
int main()
{
    int i,j,k,arr[10];

    for(i=1;i<=10;i++)
    {

    cout<<"enter the number"<<"["<<i<<"]"<< " : ";
     cin>>arr[i];
     }
     for(j=1;j<=10;j++)
     {
         if(arr[j]%2==0)
         {
             cout<<"the even number is"<<"["<<j<<"]"<<endl;
         }
     }
     cout<<endl;
}
