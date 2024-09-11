#include<iostream>
using namespace std;
int main()
{
   int n1,n2,n3,n4,n5;



       cout<<"enter the number :"<<endl;
   cin>>n1>>n2>>n3>>n4>>n5;


   if(n1>n2 && n1>n3 && n1>n4 && n1>n5)
   {
       cout<<"the large number is : "<<n1;
   }
   else if(n2>n1 && n2>n3 && n2>4 && n2>n5)
   {
       cout<<"the large number is : "<<n2;
   }
   else if(n3>n1 && n3>n2 && n3>n4 && n3>n5)
   {
       cout<<"the large number is : "<<n3;
   }
   else if(n4>n1 && n4>n2 && n4>n3 && n4>n5)
   {
       cout<<" the large number is  : "<<n4;
   }
   else{
    cout<<"the lareg number is  : "<<n5;
   }
   return 0;


}

