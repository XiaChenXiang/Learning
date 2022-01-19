#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a = 0;
    cout<<"a =";
    cin>>a;
    if(a == 1)
    {
        cout<<"End"<<endl;
        return 1;
    }
    cout<<a<<"------";
    while(a != 1)
    {
        if(a % 2 == 0)
        {
            a = a / 2;
            cout<<a<<"------";
        }
        else
        {
            a = 3 * a + 1;
            cout<<a<<"------";
        }
    }
    cout<<endl<<"End"<<endl;

    return 0;
}