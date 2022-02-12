#include <iostream>
#include <cstdio>
using namespace std;
const int MAX = 10000;
const int INFINITY = 10000000;
void exchange(int* a, int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
void mergesort(int* start, int p, int q)
{
    cout<<"ok"<<endl;
    cout<<"p = "<<p<<endl;
    cout<<"q = "<<q<<endl;
    if(p == q)
    {
        return;
    }
    int mid = (p + q) / 2;
    cout<<"mid = "<<mid<<endl;
    int* now = start;
    mergesort(start, p, mid);
    mergesort(start + (mid - p + 1), mid + 1, q);
    cout<<"OK "<<" p = "<<p<<" q = "<<q<<endl;
    int first[mid - p + 2];
    first[mid - p + 1] = INFINITY;
    int second[q - mid + 1];
    second[q - mid] = INFINITY;
    for(int i = 0; i < mid - p + 1; ++i)
    {
        first[i] = *(start + i);
        cout<<endl<<"first["<<i<<"] = "<<first[i]<<endl;
    }
    for(int i = 0; i < q - mid; ++i)
    {
        second[i] = *(start + (mid - p + 1) + i);
        cout<<endl<<"second["<<i<<"] = "<<second[i]<<endl;
    }
    int i = 0;
    int j = 0;
    while(now - start <= q - p)
    {
        if(first[i] < second[j])
        {
            *now = first[i];
            cout<<"enter if 1"<<endl;
            now++;
            i++;
            //cout<<"first["<<j<<"] = "<<first[j]<<endl;
        }
        else
        {
            *now = second[j];
            cout<<"enter if 2"<<endl;
            now++;
            j++;
            cout<<"second["<<j<<"] = "<<second[j]<<endl;
        }
    }
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
    mergesort(&array[0], 0, n - 1);
    for(int i = 0; i < n; ++i)
    {
        cout<<"array["<<i<<"] = "<<array[i]<<endl;
    }
    return 0;
}