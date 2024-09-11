#include<iostream>
using namespace std;
int main()
{
   int arr[6];
   int sum=0;

   for(int i=1;i<6;i++){
        cout<<"enter the number"<<" arr["<<i<<"]"<<" :";

   cin>>arr[i];

   }
cout<<endl;

for(int j=1;j<6;j++)
{
    sum=sum+arr[j];
}
cout<<"the sum is :"<<sum;

return 0;
}

