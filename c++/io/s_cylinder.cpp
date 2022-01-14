#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double r,h,s1,s2,s0;
    const double pi=3.1415926;
    cout<<"Input r,h="<<endl;
    scanf("%lf%lf",&r,&h);
    s1=pi*r*r;
    s2=2*pi*r*h;
    s0=2*s1+s2;
    printf("scylinder=%0.3lf\n",s0);
    return 0;
}