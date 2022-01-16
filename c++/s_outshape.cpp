#include <iostream>
#include <stdlib.h>
using namespace std;
const int MAX = 20;
const double INFINITY = 2147483648;
int main()
{
    int a;
    cout<<"numbers of its spots"<<endl;
    cin>>a;
    if( a < 3 || a>20 )
    {
        cout<<"out of border"<<endl;
        return 1;
    }
    int xaxis[MAX];
    int yaxis[MAX];
    int xborder[MAX];
    int yborder[MAX];
    int assist = 0;
    double k[MAX][MAX];
    for( int i = 0; i < MAX; ++i )
    {
        xaxis[i] = yaxis[i] = xborder[i] = yborder[i] = 0;
    }
    for( int i = 0; i < a; ++i )
    {
        cout<<"Input the ["<<i+1<<"]th xaxis & yaxis"<<endl;
        cin>>xaxis[i]>>yaxis[i];
    }
    for( int i = 0 ; i < a ; ++i )
    {
        for( int j = 0 ; j < a ; ++j )
        {
            if( i != j && xaxis[i] == xaxis[j] && yaxis[i] == yaxis[j] )
            {
                cout<<"no same spots"<<endl;
                return 1;
            }
        }
    }
    cout<<"------ok------54--"<<endl ;
    for( int i = 0 ; i < a ; ++i )
    {
        for( int j = 0 ; j < a ; ++j )
        {
            if(xaxis[i] > xaxis[j] )
            {
                xborder[0] = xaxis[i];
                yborder[0] = yaxis[i];
                assist = i;
                cout<<i<<"-"<<j<<endl;
                cout<<"xborder"<<endl<<xborder[0]<<"------"<<xborder[1]<<endl<<"yborder"<<endl<<yborder[0]<<"------"<<yborder[1]<<endl;
            }
        }
    }
    
    int n_border = 1;
    int now = 0;
    cout<<"------ok------71--"<<endl ;
    for( int i = 0 ; i < a ; ++i )
    {
        if( xaxis[i] != xaxis[assist] )
        {
            k[assist][i] = ( (yaxis[i] - yaxis[assist]) / (xaxis[i] - xaxis[assist]) );
        }
    }
    for( int i = 0 ; i < a ; ++i )
    {
        if( xaxis[i] != xaxis[assist] )
        {
            for( int j = 0 ; j < a ; j++ )
            {
                if( xaxis[j] != xaxis[assist] && k[assist][i] < k[assist][j] )
                {
                    xborder[n_border] = xaxis[i];
                    yborder[n_border] = yaxis[i];
                    now = i;
                }
            }
        }
        if( xaxis[i] == xaxis[assist] && i != assist && yaxis[i] > yaxis[assist] )
        {
            xborder[n_border] = xaxis[i];
            yborder[n_border] = yaxis[i];
            now = i;
        }
    }
    n_border = n_border + 1;
    cout<<"------ok------103--"<<endl ;
    cout<<"xborder"<<endl<<xborder[0]<<"------"<<xborder[1]<<endl<<"yborder"<<endl<<yborder[0]<<"------"<<yborder[1]<<endl;
    for( int i = now ; i != assist ; i = now )
    {
        for( int m = 0 ; m < a ; ++m )
        {
            if( xaxis[m] < xaxis[now] )
            {
                k[now][m] = ( (yaxis[m] - yaxis[now]) / (xaxis[m] - xaxis[now]) );
            }
            if( xaxis[m] > xaxis[now] )
            {
                k[now][m] = ( (yaxis[m] - yaxis[now]) / (xaxis[m] - xaxis[now]) ) + 2 * INFINITY;
            }
            if( xaxis[m] == xaxis[now] && m != now && yaxis[m] > yaxis[now] )
            {
                k[now][m] = - INFINITY ;
            }
            if( xaxis[m] == xaxis[now] && m != now && yaxis[m] < yaxis[now] )
            {
                k[now][m] = INFINITY ;
            }
        }
        for( int j = 0 ; j < a ; ++j )
        {
            if( j != assist )
            {
                for( int l = 0 ; l < a ; l++ )
                {
                    if( l != assist && k[now][j] < k[now][l] )
                    {
                        xborder[n_border] = xaxis[j];
                        yborder[n_border] = yaxis[j];
                        now = j;
                    }
                }
            }
        }
        n_border = n_border + 1;
    }
     cout<<"------ok------103--"<<endl ;
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