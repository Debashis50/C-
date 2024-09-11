#include<iostream>
using namespace std;
int main()
{
       float sum=0,copunt=0;

        float arr[3][4]={{2.3,1.2,1.4,1.1},
                         {3.4,5.4,3.5,1.3},
                         {1.4,4.1,2.5,4.3}};

               for(int i=0;i<3;i++)
               {
                 for(int j=0;j<4;j++){

                    sum=sum+arr[i][j];
                    copunt++;
                    }
               }

               cout<<"summation is:"<<sum<<endl;

               float avg=sum/copunt;

               cout<<"average :"<<avg<<endl;

              double sum2=0;

               for(int i=0;i<3;i++)
               {
                   for(int j=0;j<4;j++){

                    sum2=sum2+arr[i][j];
                   }
                     }

                   cout<<"summation :"<<sum2<<endl;

                   return 0;
}
