#include<iostream>
using namespace std;
int main()
{
    int speed,n1,p1,n2,p2;
    cin>>n1;
    cin>>p1;
    cin>>n2;
    cin>>p2;
    speed=(n1*p1-n2*p2)/(p1-p2);
    cout<<speed<<endl;
    return 0;
}