#include<iostream>
using namespace std;
int main()
{
    double first_arra[6],second_arra[6],s=0;
    for(int i=0;i<6;i++)
    {
        cout<<"enter the value for first array"<<i<<":";
        cin>>first_arra[i];
    }
    for(int n=0;n<6;n++)
    {
        cout<<"enter the value for second array"<<n<<":";
        cin>>second_arra[n];
    }
    int d;
    for(int num=0; num<=5; num++)
    {
        s=(first_arra[num]*second_arra[d=5-num]);
        cout<<"the multiplies of " <<num[first_arra]<< " and " <<d[second_arra]<<":"<<s<<endl;
    }
    return 0;
}
