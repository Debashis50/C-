#include<iostream>
#include<string>
using namespace std;

class student
{ public:
   string name;
   int id;
   float cg;

void display(string name,int id,float cg)
   {

       cout<<"Name :"<<name<<endl;
       cout<<"Id number :"<<id<<endl;
       cout<<"CGPA :"<<cg<<endl;
   }
};
int main()
{
    student obj,deba,upen,udvob;
    obj.display("Debashis",101,3.73);
    cout<<endl;
    deba.display("Udvob",102,3.06);
    cout<<endl;
    upen.display("Rukmini",103,2.85);
    cout<<endl;
    udvob.display("Protassa",104,3.95);
}
