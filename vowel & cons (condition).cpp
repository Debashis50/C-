#include<iostream>
using namespace std;
int main()
{
    char ch;

    cout<<"enter any letter : ";
    cin>>ch;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        cout<<"this is a vowel.";
    }
    else {
        cout<<"consonant";
    }
    return 0;
}
