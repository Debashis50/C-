#include<iostream>
using namespace std;
int main()
{
    float large_first_row,small_second_row,result,arr[2][4]={{1.3,-2.1,4.1,3.4},{-2.3,3.1,-1.1,0.1}};

    for(int i=0;i<4;i++){
        if(arr[0][i]>large_first_row)
        {
            large_first_row=arr[0][i];
        }
         }

        cout<<"largest element from the first row :"<<large_first_row<<endl;

         cout<<endl;

    for(int i=0;i<4;i++)
    {
        if(arr[1][i]<small_second_row)
        {
            small_second_row=arr[1][i];
        }
         }

       cout<<"smallest element from the second row :" <<small_second_row<<endl;

       cout<<endl;

    result=large_first_row*small_second_row;

    cout<<"The multiplies result is :"<<result;

    return 0;

}
