
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
    if (n_child > 100)
    {
        cout<<"Child exceeding 100 ..."<<endl;
        return 1;
    }
    for(int i = 0; i < n_child; ++i )
    {
        candy[i] = 0;
    }
    for(int i = 0; i < n_child ; ++i )
    {
        cout<<"Please input ["<<i+1<<"]th child's candy:"<<endl;
        cin>>candy[i];
    }
    for (int i = 0; i < n_child; ++i)
    {
        int k = i + n_child;
        divide = candy[i]/3;
        candy[(k - 1)%n_child ] += divide;
        candy[ k%n_child ]    = divide;
        candy[(k + 1)%n_child] += divide;
    }

    /*
    for(int j = 1; j<=n_child ; ++j )
    {
        divide = candy[j]/3;
        candy[j-1] = divide + candy[j-1];
        candy[j] = divide;
        candy[j+1] = divide + candy[j+1];
        if(j == 1)
        {
            candy[n_child] = candy[n_child] + candy[0];
        }
        if(j == n_child )
        {
            candy[1] = candy[1] + candy[n_child + 1];
        }
    }
    */
    cout<<"Each child's candy..."<<endl;
    for(int k = 0; k < n_child; ++k)
    {
        cout<<candy[k]<<endl;
    }

    return 0;
}