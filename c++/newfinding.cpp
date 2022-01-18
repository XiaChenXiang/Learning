#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
   int a[30][40];
   for(int i = 0; i < 30; ++i)
   {
       for(int j = 0;j < 40; ++j)
       {
           a[i][j] =100*i + j;
       }
   }
   cout<<a[8]<<endl;
   
   return 0;
}