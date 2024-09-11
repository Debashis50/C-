#include<iostream>
using namespace std;
int main()
{
    int n,i;
     bool isprime=true;
     cout << "Enter a number ";
     cin >> n;

    for(int i=2;i<=n/2;++i)
    {
            if(n%i==0)
                {

                isprime=false;
                break;
            }
        }
        if(isprime)
            cout << "This is a prime number ";

            else
                cout << "This is not a prime number";
            return 0;
        }
