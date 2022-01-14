#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n1,n2,n3,a=1,b=2,c=3,d=4;
    n1=a<=b&&c<=d;
    n2=n1==a++||n1==++b;
    n3=!b==c||!++c==d;
    printf("%d\n%d\n%d\n",n1,n2,n3);
    return 0;
}