#include <iostream>
#include <cstdio>
using namespace std;
    int helper = 0;
int medium = 0;
int array[11] = {11,4,55,6,77,8,9,0,7,1,-1};
int bchange[11] = {};
int sort(int start, int end)
{
    medium = (start + end) / 2;
    for(int i = 0; i < (end - start + 1) / 2; ++i)
    {
        for(int j = start; j < medium; ++j)
        {
            if(array[j] > array[medium])
            {
                
            }
        }
        for(int k = end; k > medium; --k)
        {

        }
    }
}
int main()
{

    return 0;
}