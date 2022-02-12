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
        for(int j = 0; j < i; ++j)
        {
            if(array[i] < array[j])
            {
                /*
                for(int k = j; k < i; ++k)
                {
                    exchange(&array[k],&array[i]);
                }
                */
                assist = array[i];
                for(int k = i; k > j; --k)
                {
                    array[k] = array[k - 1];
                }
                array[j] = assist;
                break;
            }
        }
    }
    for(int i = 0; i < n; ++i)
    {
        cout<<"array["<<i<<"] = "<<array[i]<<endl;
    }
    return 0;
}