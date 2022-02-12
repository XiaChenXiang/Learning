#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int m = 0;
    int n = 0;
    int r = 0;
    cout<<"m = ";
    cin>>m;
    cout<<"n = ";
    cin>>n;
    do
    {
        r = m % n;
        m = n;
        n = r;
    } 
    while (r != 0);
    cout<<"(m,n) = "<<m<<endl;
    return 0;
}