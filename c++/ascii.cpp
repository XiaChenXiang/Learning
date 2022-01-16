#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int a;
    int array[10][10];
    for( int i = 0; i < 10; ++i)
    {
        for( int j = 0; j < 10; ++j)
        {
            array[i][j] = 0;
        }
    }
    memset( array, 0,sizeof(array) ); 
    double b;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(array)<<endl;
    cout<<sizeof(b)<<endl;
    return 0;

    
    
}