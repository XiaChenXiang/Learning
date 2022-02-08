#include <iostream>
#include <cstdio>
using namespace std;
int array[11] = {11,4,55,6,77,8,9,0,7,1,-1};
//int array[11] = {11,10,9,88,77,660,5,44,3,290,48};
int n_array = 11;
int exchange(int* a, int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
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
void max_heapify(int position)
{
    int max = position;
    int l = left(position);
    int r = right(position);
    if(array[l - 1] > array[max - 1])
    {
        max = l;
    }
    if(array[r - 1] > array[max - 1])
    {
        max = r;
    }
    if(max != position)
    {
        exchange(&array[max - 1], &array[position - 1]);
        max_heapify(max);
    }
    else
    {
        return;
    }
}

int main()
{
    
    return 0;
}