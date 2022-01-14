#include<iostream>
#include<cstdio>
using namespace std;
const int MAX_CHILD = 100;

int main()
{
    int n_child;
    int candy[MAX_CHILD];
    int candy2[MAX_CHILD];
    int divide;
    cin>>n_child;
    for(int i = 0; i<=n_child+1; ++i )
    {
        candy[i]=candy2[i]=0;
    }
    for(int i = 1; i<=n_child ; ++i )
    {
        cout<<i<<endl;
        cin>>candy[i];
        candy2[i] = candy[i];
    }
    for(int j = 1; j<=n_child ; ++j )
    {
        divide = candy[j]/3;
        candy2[j-1] = divide + candy2[j-1];
        candy2[j] = candy2[j] - candy[j] + divide;
        candy2[j+1] = divide + candy2[j+1];
    }
    candy2[n_child] += candy2[0];
    candy2[1] += candy2[n_child + 1];
    for(int k = 1;k<=n_child;++k)
    {
        cout<<candy2[k]<<endl;
    }

    return 0;
}