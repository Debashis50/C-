#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"enter mark :";
    cin>>mark;


    if(mark>100)
    {
        cout<<"invalid .";
    }
    else if(mark>=80)
    {
        cout<<"the grade is :"<<"A+";
    }
    else if (mark>=70)
    {
        cout<<"the grade is :"<<"A";
    }
    else if(mark>=60)
    {
        cout<<"the grade is :"<<"A-";
    }
    else if(mark>=50)
    {
        cout<<"the grade is :"<<"B";
    }
    else if(mark>=40)
    {
        cout<<"the grade is :"<<"C";
    }
    else if(mark>=33)
    {
        cout<<"the grade is :"<<"D";
    }
    else {
        cout<<"fail"<<endl;
        cout<<"better luck next time .";
    }
    return 0;
}
