#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int m;
    int x,y;
    cout<<"Input m=";
    cin>>m;
    if(m>999 || m<100)
    {
        cout<<"m exceeding my limit";
        return 1;
    }
    x = m / 100;
    y = m % 10;
    m = m + 99*y - 99*x;
    cout<<"the exchanged m ="<<m;

    return 0;
}