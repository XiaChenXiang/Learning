#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"input a,b="<<endl;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<a<<endl<<b<<endl;
    return 0;
}