#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    float delta = 0;
    cout<<"a,b,c="<<endl;
    cin>>a>>b>>c;
    delta = b * b - 4 * a * c;
    if(a == 0)
    {
        if(b != 0)
        {
            cout<<"x = "<< - ( c / b )<<endl;
        }
        if(b == 0 && c == 0)
        {
            cout<<"x belongs to R"<<endl;
        }
        if(b == 0 && c != 0)
        {
            cout<<"x belongs to nihility"<<endl;
        }
    }
    if(a != 0)
    {
        if(delta < 0)
        {
            cout<<"x belongs to nihility"<<endl;
        }
        else
        {
            float x1 = ( - b + sprt(delta) ) / ( 2 * a );
            cout<<" x1 = "<<x1<<endl;
            float x2 = ( - b - sprt(delta) ) / ( 2 * a );
            cout<<" x2 = "<<x2<<endl;
        }
    }
    return 0;
}