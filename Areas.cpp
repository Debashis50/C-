#include<bits/stdc++.h>
using namespace std;
int main()
{
   double A,B,C;
   cin>>A>>B>>C;

   //a
   double tri=0.5*A*C;
   cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<tri<<endl;

   //b
   double pi=3.14159;
   double cir=pi*C*C;
   cout<<fixed<<setprecision(3)<<"CIRCULO: "<<cir<<endl;

   //c
   double tra=(A+B)/2 *C;
   cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<tra<<endl;

   //d
   double sqa=B*B;
   cout<<fixed<<setprecision(3)<<"QUADRADO: "<<sqa<<endl;

   //e
   double rec=A*B;
   cout<<fixed<<setprecision(3)<<"RETANGULO: "<<rec<<endl;

    return 0;
}
