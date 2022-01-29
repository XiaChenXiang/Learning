#include <iostream>
#include <cstdio>
using namespace std;
//int array[11] = {11,4,55,6,77,8,9,0,7,1,-1};
int array[11] = {11,10,9,88,77,660,5,44,3,290,48};
void sort(int start, int end)
{
    int helper = 0;
    int judge = start;
    int now = end;
    while(judge < now)
    {
        if(array[judge] > array[now])
        {
            helper = array[judge];
            array[judge] = array[now - 1];
            array[now - 1] = array[now];
            array[now] = helper;
            --now;
        }
        else
        {
            ++judge;
        }
    }
    if((now - start) > 1)
    {
        sort(start, now - 1);
    }
    if((end - now) > 1)
    {
        sort(now + 1, end);
    }
    else
    {
        return;    
    }
}
int main()
{
    sort(0, 10);
    for(int i = 0; i <11; ++i)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}