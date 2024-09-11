#include<iostream>
using namespace std;
int main()
{
    int i,j,row,col;

cout<<"Enter the row number :";
cin>>row;

cout<<"Enter the column number :";
cin>>col;

cout<<endl;

float search_num,arr[row][col];

    cout<<"enter the input of the array :"<<endl;

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++){

            cin>>arr[i][j];
        }
    }

    cout<<"search the number : ";
    cin>>search_num;

    cout<<endl;

   bool found=false;

   for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
       {
         if(arr[i][j]==search_num){
          found=true;

        break;
         }
        }}

        if(found)
        {
            cout<<"The number "<<search_num<<" is present in the array."<<endl;
        }

        else{
            cout<<"The number "<<search_num<<" is not present in the array."<<endl;
        }
        return 0;
}


