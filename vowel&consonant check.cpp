#include<iostream>
using namespace std;
int main()
{
  char ch;

  cout<<"enter the character :";
  cin>>ch;

  switch(ch)
  {
  case 'a':
  case'A':
    cout<<"vowel";
    break;
  case 'e':
    case 'E':
    cout<<"vowel";
    break;
    case 'i':
    case 'I':
        cout<<"vowel";
        break;
    case 'o':
    case 'O':
        cout<<"vowel";
        break;
    case 'u':
    case 'U':
        cout<<"vowel";

    default:
    cout<<"consonant";
    break;
  }
  return 0;
}
