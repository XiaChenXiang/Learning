#include <iostream>
#include <cstdio>
#include<stdlib.h>
using namespace std;
const int MAX = 20;
int tan( int x , int y , int z)
{
    if( (x - y) / (1 + x*y) < (x - z) / (1 + x*z) )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a;
    cout<<"numbers of its spots"<<endl;
    cin>>a;
    if( a < 3 || a>20)
    {
        cout<<"out of border"<<endl;
        return 1;
    }
    int xaxis[MAX];
    int yaxis[MAX];
    int xborder[MAX];
    int yborder[MAX];
    int assist = 0;
    for( int i = 0; i < MAX; ++i )
    {
        xaxis[i] = yaxis[i] = xborder[i] = yborder[i] = 0;
    }
    for( int i = 0; i < a; ++i )
    {
        cout<<"Input the ["<<i+1<<"]th xaxis & yaxis"<<endl;
        cin>>xaxis[i]>>yaxis[i];
    }
    double k[MAX][MAX];
    for( int i = 0 ; i < a ; ++i )
    {
        for( int j = 0 ; j < a ; ++j )
        {
            if(xaxis[i] >= xaxis[j] )
            {
                xborder[0] = xaxis[i];
                yborder[0] = yaxis[i];
                assist = i;
            }
        }
    }
    int n_border = 1;
    int now = 0;
    int previous = 0;
    int b_previous = 0;
    for( int i = 0 ; i < a ; ++i )
    {
        if( i != assist )
        {
            k[assist][i] = ( (yaxis[i] - yaxis[assist]) / (xaxis[i] - xaxis[assist]) );
        }
    }
    for( int i = 0 ; i < a ; ++i )
    {
        if( i != assist )
        {
            for( int j = 0 ; j < a ; j++ )
            {
                if( j != assist && k[assist][i] > k[assist][j] )
                {
                    xborder[n_border] = xaxis[i];
                    yborder[n_border] = yaxis[i];
                    now = i;
                }
            }
        }
    }
    n_border = n_border + 1;
    previous = assist;
    b_previous = now;
    for( int i = now ; i != assist ; i = now )
    {
        b_previous = now;
        for( int j = 0 ; j < a ; ++j )
        {
            for( int m = 0 ; m < a ; ++m )
            {
                if( m != now )
                {
                    k[now][m] = ( (yaxis[m] - yaxis[now]) / (xaxis[m] - xaxis[now]) );
                }
            }
            if( j != assist )
            {
                for( int l = 0 ; l < a ; l++ )
                {
                    if( l != assist && tan( k[previous][i] , k[i][j] , k[i][l]) )
                    {
                        xborder[n_border] = xaxis[j];
                        yborder[n_border] = yaxis[j];
                        now = j;
                    }
                }
            }
        }
        n_border = n_border + 1;
        previous = b_previous;
    }
    for( int i = n_border - 1; i >= 0 ; --i)
    {
        xborder[i] = xborder[i] - xborder[0];
        yborder[i] = yborder[i] - yborder[0];
    }
    int s[MAX][MAX];
    int s0 = 0;
    for( int i = n_border - 1; i > 0 ; --i)
    {
        s[i][i-1] = abs((xborder[i]*yborder[i - 1] - yborder[i]*xborder[i - 1])/2);
        s0 = s0 + s[i][i - 1];
    }
    cout<<"s="<<s0;
    return 0;
}