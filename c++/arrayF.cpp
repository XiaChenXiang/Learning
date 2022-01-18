#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
using namespace std;
const int MAX = 100;
int main()
{
    int F[MAX + 2];
    F[0] = 1;
    F[1] = 1;
    int mod = 0;
    int left[MAX];
    int num = 0;
    cout<<"mod = ";
    cin>>mod;
    const int CIRMAX = mod * mod + 2;
    if( CIRMAX >= MAX)
    {
        cout<<"mod too big"<<endl;
        return 1;
    }
    if( mod < 5)
    {
        cout<<"mod too small"<<endl;
        return 1;
    }
    for(int i = 0; i < CIRMAX + 4; ++i)
    {
        left[i] = 0;
        F[i + 2] = F[i + 1] + F[i];
        cout<<"F"<<endl<<F[i + 2]<<endl;
    }
    for(int i = 0; i < CIRMAX + 4; ++i)
    {
        left[i] = F[i] % mod;
        cout<<"the ["<<i<<"]th = "<<left[i]<<endl;
        if(i > 3 && left[i] == left[3] && left[i - 1] == left[2])
        {
            num = i - 3;
            cout<<"num = "<<num<<endl;
            break;
        }
    }
    for(int i = 0; i < num; ++i)
    {
        cout<<"circulation = "<<num<<endl;
        cout<<"the ["<<i + 1<<"]th = "<<left[i + 2]<<endl;
    }
    return 0;
}