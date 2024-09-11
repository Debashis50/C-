#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char word[]="BANGLADESH";
    int length = strlen(word);
    for(int i=0; i<length; i++)
    {
        for(int j=length-i;j>1; j--)
        {
            cout << " ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<word[j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
