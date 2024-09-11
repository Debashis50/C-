#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter the chararcter :";
    cin>>ch;

    switch(ch)
    {
case 'a':
case'A':
case'E':
case'e':
case'i':
case'I':
case'O':
case'o':
case'U':
case'u':
    cout<<"vowel";
    break;

    default:
        cout<<"consonant";
    }
}
