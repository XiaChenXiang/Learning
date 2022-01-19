#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
   int p = 0;
   int q = 0;
   int x = 0;
   int y = 0;
   cout<<"p = ";
   cin>>p;
   cout<<"q = ";
   cin>>q;
   x = p <= q ? p : q;
   while(x > 1 && !(p % x == 0 && q % x == 0))
   {
       x--;
   }
   cout<<"(p,q) = "<<x<<endl;
   y = p >= q ? p : q;
   while(y < p*q && (y % q != 0 || y % p != 0))
   {
       y++;
   }
   cout<<"[p,q] = "<<y<<endl;
   return 0;
}