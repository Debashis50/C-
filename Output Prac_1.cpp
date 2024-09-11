#include<iostream>
using namespace std;
int main()
{
    int n=4,i=n;
    while(i>0)
    {
        for(int j=0;j<=n;j++)
    {
        if(j>=i)
        {
            cout<<i+j;
        }
        else
        {
            cout<<" ";
        }
    }
    cout<<endl;
    i--;
}
return 0;
}
