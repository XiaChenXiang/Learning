#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int p = 0;
    int q = 0;
    int x = 0;
    int y = 0;
    int r = 0;
    cout<<"p = ";
    cin>>p;
    cout<<"q = ";
    cin>>q;
    x = p;
    y = q;
    r = x % y;
    while(r != 0)
    {
        x = y;
        y = r;
        r = x % y;
    }
    cout<<"(p,q) = "<<y<<endl;
    cout<<"[p,q] = "<<p * q / y<<endl;
    return 0;
}