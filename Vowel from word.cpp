#include<iostream>
using namespace std;
int main()
{
    char input[20];
    cout<<"enter the word:";
    cin>>input;

    for(int i=0; i<20; i++)
    {
        switch(input[i])
        {
        case 'a':
            cout<<input[i]<<endl;
            break;

        case 'e':
            cout<<input[i]<<endl;
            break;

        case 'i':
            cout<<input[i]<<endl;
            break;

        case 'o':
            cout<<input[i]<<endl;
            break;

        case 'u':
            cout<<input[i]<<endl;
            break;

        default:

            break;
        }
    }
    return 0;

}
