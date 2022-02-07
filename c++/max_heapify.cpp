#include <iostream>
#include <cstdio>
using namespace std;
int array[11] = {11,4,55,6,77,8,9,0,7,1,-1};
//int array[11] = {11,10,9,88,77,660,5,44,3,290,48};
int exchange(int a, int b)
{
    int c = 0;
    c = a;
    a = b;
    b = c;
}
int parent(int child)
{
    return child / 2;
}
int left(int papa)
{
    return papa * 2;
}
int right(int papa)
{
    return papa * 2 + 1;
}
void max_heapify(int position, int altitude)
{
    int max = 0;
    if(array[left(position)] > array[position])
    {
        max = left(position);
    }
    if((array[right(position)] > array[position]) && (right(position) <= 11))
    {
        max = right(position);
    }
    else
    {
        max = position;
    }
    exchange(array[max], array[position]);
    if(altitude - 1 > 0)
    {
        max_heapify(left(position), altitude - 1);
    }
    else
    {
        return;
    }
}

int main()
{
    int max_altitude = 0;
    max_heapify(1, )
    return 0;
}