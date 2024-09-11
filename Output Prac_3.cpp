#include<iostream>
using namespace std;
int main()
{
    char word[]={'H','O','m','e'};
    int i,j;
    for(i=0;i<4;i++)
    {
        cout<<word[i];
        j=i;
        while(j<4)
        {
            cout<<word[j]<<endl;
            j++;
        }
    }
    return 0;
}
