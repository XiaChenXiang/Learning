#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
   int boy , girl;
   float a_boy , a_girl;
   float average;
   cout<<"boy,girl=";
   cin>>boy>>girl;
   cout<<"a_boy,a_girl=";
   cin>>a_boy>>a_girl;
   average = (a_boy * boy +a_girl * girl)/(boy + girl);
   cout<<"average="<<average;
   return 0;
}