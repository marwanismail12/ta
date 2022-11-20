#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   float a,b,c,d,x,x1,x2;
   cout <<"Enter a: ";
cin>>a ;
 cout <<"Enter c: ";
cin>>c ;
   cout <<"Enter b: ";
cin>>b ;
   d = pow(b,2) - 4*a*c;


   x = (-b )/(2*a);
   if (d > 0)
    {
         x2 = ( -b - sqrt(d)) /2*a ;
         x1 =( -b +sqrt(d)) /2*a ;

        cout<<'x1 = '<<"   " <<'x2 =' ;
    }
   else if(d==0){cout<<'x = ';}
   else (cout<<"imaginary number");
    return 0;
}
