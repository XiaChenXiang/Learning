#include <iostream>
#include <cstdio>
using namespace std;
const int MAX = 10000;
void exchange(int* a, int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int array[MAX] = {};
    int n = 0;
    int assist = 0;
    int helper = 0;
    cout<<"n = ";
    cin>>n;
    if(n > MAX || n < 1)
    {
        cout<<"out of border"<<endl;
        return 1;
    }
    for(int i = 0; i < n; ++i)
    {
        cout<<"array["<<i<<"] = ";
        cin>>array[i];
    }
    for(int i = 1; i < n; ++i)
    {
        assist = i - 1;
        helper = array[i];
        while((assist >= 0) && (array[assist] > helper))
        {
            array[assist + 1] = array[assist];
            assist--;
        }
        array[assist + 1] = helper;
    }
    for(int i = 0; i < n; ++i)
    {
        cout<<"array["<<i<<"] = "<<array[i]<<endl;
    }
    return 0;
}