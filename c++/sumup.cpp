#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    float sum = 0;
    int max = 0;
    float m = 0;
    cout<<"max = ";
    cin>>max;
    while(sum <= max)
    {
        m++;
        sum += (1/m);
    }    
    cout<<"sum = "<<sum<<endl;
    cout<<"n = "<<m<<endl;
    return 0;
}