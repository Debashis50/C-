#include<iostream>
using namespace std;
int main()
{
    int i,j,a[2][2],b[2][2]={2,2,1,1};

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        cin>>a[i][j];

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)

        cout<<a[i][j] + b[j][i]<<endl;

}
