#include<iostream>
using namespace std;
int main()
{
    int i,j,a[3][3];

    cout<<"enter the number of square matrix :"<<endl;
    cin>>a[3][3];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cin>>a[i][j];
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
          }
          cout<<"output through the function :"<<endl;

          cout<<"middle row :";
          for(j=0;j<3;j++)
          {
              cout<<a[3/2][j]<<" ";
          }
          cout<<endl;

          cout<<"middle column :";
           for(i=0;i<3;i++)
           {
               cout<<a[i][3/2]<<" ";
           }
           cout<<endl;

        return 0;

}


