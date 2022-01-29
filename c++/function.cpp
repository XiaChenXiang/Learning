#include <iostream>
#include <cstdio>
using namespace std;
void result(int a, int* re)
{
    int m = 1;
    for(int i = 0; i < a; ++i)
    {
        m = m * (i + 1);
    }
    *re = m;
    return;
}
int main()
{
    int n = 0;
    int b = 10;
    cout<<"n = ";
    cin>>n;
    result(n , &b);
    cout<<"result"<<endl<<b<<endl;
    return 0;
}