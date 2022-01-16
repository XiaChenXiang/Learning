#include <iostream>
#include <stdlib.h>
using namespace std;
const int MAX = 20;
const double INFINITY = 20000;
/*
int cot(int x, int y,int z)
{
    int judge1 = (1 + x*y)/(x - y);
    int judge2 = z;
    if(judge1 <= judge2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
*/
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
    int origin = 0;
    int previous = 0;
    double k[MAX][MAX];
    int max = -20000000;
    int min = 20000000;
    int originmin = 20000000;
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
    cout<<"------ok------60--"<<endl ;
    for( int i = 0 ; i < a ; ++i )
    {
        if(xaxis[i] > max )
        {
            max = xaxis[i];
            xborder[0] = xaxis[i];
            yborder[0] = yaxis[i];
            origin = i;
            cout<<"xborder"<<endl<<xborder[0]<<"------"<<xborder[1]<<endl<<"yborder"<<endl<<yborder[0]<<"------"<<yborder[1]<<endl;
        }
    }
    
    int n_border = 1;
    int now = 0;

    for( int i = 0; i < a; ++i)
    {
        if( xaxis[i] != xaxis[origin] )
        {
            k[origin][i] = ( (yaxis[i] - yaxis[origin]) / (xaxis[i] - xaxis[origin]) ); 
        }
        if( xaxis[i] == xaxis[origin] && yaxis[i] > yaxis[origin] )
        {
            k[origin][i] = -INFINITY;
        }
        if( xaxis[i] == xaxis[origin] && yaxis[i] < yaxis[origin] )
        {
            k[origin][i] = INFINITY;
        }
        if( k[origin][i] < originmin && i != origin )
        {
            originmin = k[origin][i];
            xborder[1] = xaxis[i];
            yborder[1] = yaxis[i];
            cout<<"xborder["<<2<<"]="<<xborder[1]<<endl;
            cout<<"yborder["<<2<<"]="<<yborder[1]<<endl;
            now = i;
        }
    }
    n_border = n_border + 1;
    cout<<"------ok------101--"<<endl ;
    assist = origin;
    for( int i = now ; i != origin ; i = now )
    {
        previous = assist;
        assist = now;
        for( int m = 0 ; m < a ; ++m )
        {
            if( xaxis[m] < xaxis[assist] )
            {
                k[assist][m] = ( (yaxis[m] - yaxis[assist]) / (xaxis[m] - xaxis[assist]) ); 
                cout<<"k["<<assist<<"]["<<m<<"] = "<<k[assist][m]<<endl;
            }
            if( xaxis[m] > xaxis[assist] )
            {
                k[assist][m] = ( (yaxis[m] - yaxis[assist]) / (xaxis[m] - xaxis[assist]) ) + 2 * INFINITY; 
                cout<<"k["<<assist<<"]["<<m<<"] = "<<k[assist][m]<<endl;
            }
            if( xaxis[m] == xaxis[assist] && m != assist && yaxis[m] > yaxis[assist] )
            {
                k[assist][m] = - INFINITY ;
                cout<<"k["<<assist<<"]["<<m<<"] = "<<k[assist][m]<<endl;
            }
            if( xaxis[m] == xaxis[assist] && m != now && yaxis[m] < yaxis[assist] )
            {
                k[assist][m] = INFINITY ;
                cout<<"k["<<assist<<"]["<<m<<"] = "<<k[assist][m]<<endl;
            }
            cout<<endl<<"k["<<previous<<"]["<<assist<<"] = "<<k[previous][assist]<<endl<<endl;
        }
        for( int j = 0 ; j < a ; ++j )
        {
            if( (k[assist][j] - k[previous][assist]) < min && j != assist && j != previous && 0 <= (k[assist][j] - k[previous][assist]) )
            {
                cout<<"min="<<min<<"----------k["<<assist<<"]["<<j<<"] = "<<k[assist][j]<<endl;
                min = k[assist][j] - k[previous][assist];
                xborder[n_border] = xaxis[j];
                yborder[n_border] = yaxis[j];
                cout<<endl<<"xborder["<<n_border<<"] = "<<xborder[n_border]<<endl;
                cout<<"yborder["<<n_border<<"] = "<<yborder[n_border]<<endl<<endl;
                now = j;
                cout<<"min="<<min<<endl;
            }
            else
            {
                cout<<"k[assist][j] = "<<k[assist][j]<<"  k[previous][assist] = "<<k[previous][assist]<<endl;
                cout<<"min="<<min<<"  j = "<<j<<" assist = "<<assist<<endl;
            }
        }
        n_border = n_border + 1;
        cout<<"n_border = "<<n_border<<endl;
        min = 20000000;
    }
     cout<<"------ok------103--"<<endl ;
     for( int i = 0; i < a; ++i)
     {
        cout<<"xborder["<<i+1<<"]="<<xborder[i]<<endl;
        cout<<"yborder["<<i+1<<"]="<<yborder[i]<<endl;
     }
    for( int i = n_border - 2; i >= 0 ; --i)
    {
        xborder[i] = xborder[i] - xborder[0];
        yborder[i] = yborder[i] - yborder[0];
        cout<<endl;
        cout<<"xborder["<<i+1<<"]="<<xborder[i]<<endl;
        cout<<"yborder["<<i+1<<"]="<<yborder[i]<<endl;
    }
    float s[MAX][MAX];
    float s0 = 0;
    for( int i = n_border - 2; i > 0 ; --i)
    {
        s[i][i-1] = abs((xborder[i]*yborder[i - 1] - yborder[i]*xborder[i - 1]))/2.0;
        cout<<s[i][i-1]<<endl;
        s0 = s0 + s[i][i - 1];
    }
    cout<<"s="<<s0<<endl;
    return 0;
}