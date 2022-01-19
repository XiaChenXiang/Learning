#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
   int s = 0;
   int max = 0;
   int a = 0;
   cout<<"max = ";
   cin>>max;
    while(s < max)
    {
        a++;
        s = s + a;
    }
    cout<<"a = "<<a<<endl;
   return 0;
}