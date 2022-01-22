
#include<iostream>
#include<cstdio>
using namespace std;
const int MAX_CHILD = 100;

int main()
{
    int n_child;
    int candy[MAX_CHILD];
    int divide;
    cin>>n_child;
    for(int i = 0; i<=n_child+1; ++i )
    {
        candy[i] = 0;
    }
    for(int i = 1; i<=n_child ; ++i )
    {
        cout<<i<<endl;
        cin>>candy[i];
    }
    for(int j = 1; j<=n_child ; ++j )
    {
        divide = candy[j]/3;
        candy[j-1] = divide + candy[j-1];
        candy[j] = divide;
        candy2[j+1] = divide + candy[j+1];
        if(j == 1)
        {
            candy[n_child] = candy[n_child] + candy[0];
        }
        if(j == n_child )
        {
            candy[1] = candy[1] + candy[n_child + 1];
        }
    }
    for(int k = 1;k<=n_child;++k)
    {
        cout<<candy[k]<<endl;
    }

    return 0;
}