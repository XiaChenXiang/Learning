#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    float r0;
    float r1=20;
    float r2=30;
    //cout<<"r1="<<" "<<"r2=";
    scanf("%f %f",&r1, &r2);
    r0=(r1*r2)/(r1+r2);
    printf("ro=%0.3f \n",r0);
    return 0;
}