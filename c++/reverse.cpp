#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n = 0;
    int m = 0;
    int an = 1;
    int am = 1;
    int array[50];
    int x = 1;
    cout<<"n = ";
    cin>>n;
    if(n < 0)
    {
        x = -1;
        n = -n;
    }
    while(n % an != n)
    {
        m++;
        cout<<"m = "<<m<<endl;
        an = 10 * an;
        cout<<"an = "<<an<<endl;
        array[m] = (n % an) / (an / 10);
        cout<<"array[] = "<<array[m]<<endl;
    }
    an = 1;
    for(int i = 0; i < m/2; ++i)
    {
        cout<<endl<<"i = "<<i<<endl;
        cout<<"n > 0"<<endl;
        for(int j = 0; j < m - i - 1; ++j)
        {
            an = 10 * an;
            cout<<"an = "<<an<<endl;
        }
        for(int j = 0; j < i; ++j)
        {
            am = 10 * am;
            cout<<"am = "<<am<<endl;
        }
        n = n - (an - am) * (array[m - i] - array[i + 1]);
        cout<<"n = "<<n<<endl;
    
        an = 1;
        am = 1;   
    }
    cout<<"n = "<<x*n<<endl;
    return 0;
}