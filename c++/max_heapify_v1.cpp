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
    cout<<"position"<<position<<endl;
    int max = parent(position);
    if(array[position - 1] > array[parent(position) - 1])
    {
        max = position;
    }
    if((array[position] > array[max - 1]) && (position < n_array))
    {
        max = position + 1;
    }
    cout<<"max"<<max<<endl;
    exchange(&array[max - 1], &array[parent(position) - 1]);
    cout<<"array["<<max<<"] = "<<array[max - 1]<<endl;
    cout<<"array["<<parent(position)<<"] = "<<array[parent(position) - 1]<<endl;
    if((position - 2) > 0)
    {
        max_heapify(position - 2);
    }
}

int main()
{
    int start = 0;
    start = n_array - n_array % 2;
    cout<<"start = "<<start<<endl;
    max_heapify(start);
    for(int i = 0; i < 11; ++i)
    {
        cout<<"array["<<i + 1<<"] = "<<array[i]<<endl;
    }
    return 0;
}