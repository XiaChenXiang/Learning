#include <iostream>
#include <cstdio>
using namespace std;
int array[11] = {11,4,55,6,77,8,9,0,7,1,-1};
//int array[11] = {11,10,9,88,77,660,5,44,3,290,48};
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
    cout<<"position"<<position<<endl;
    int max = 0;
    if(array[left(position) - 1] > array[position - 1])
    {
        max = left(position);
    }
    if((array[right(position) - 1] > array[max - 1]) && (right(position) <= 11))
    {
        max = right(position);
    }
    else
    {
        max = position;
    }
    cout<<"max"<<max<<endl;
    exchange(&array[max - 1], &array[position - 1]);
    cout<<"array["<<max - 1<<"] = "<<array[max - 1]<<endl;
    cout<<"array["<<position - 1<<"] = "<<array[position - 1]<<endl;
    if(left(left(position)) <= 11)
    {
        max_heapify(left(position));
        if(left(right(position)) <= 11)
        {
            max_heapify(right(position));
        }
    }
    else
    {
        return;
    }
}

int main()
{
    max_heapify(1);
    for(int i = 0; i < 11; ++i)
    {
        cout<<"array["<<i + 1<<"] = "<<array[i]<<endl;
    }
    return 0;
}