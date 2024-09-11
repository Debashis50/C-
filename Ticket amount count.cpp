#include<iostream>
using namespace std;
int main()
{
    int age,ticket,total,dis;

    cout<<" enter the age :";
    cin>>age;

    cout<<" enter the ticket number :";
    cin>>ticket;

    if(age<=12)
    {
        total=ticket*150;
        cout<<"total price :"<<total<<endl;

    }
    else if(age>=60)
    {
        total=ticket*100;
        cout<<"total price :"<<total<<endl;
    }
    else{
        total=ticket*200;
        cout<<"total price :"<<total<<endl;
    }
  if(ticket>5)
  {
      dis=total*0.9;
    cout<<"Discount Price :"<<dis<<endl;
  }
  return 0;


}
