#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int help = 0;
    int array[10] = {11,4,55,6,77,8,9,0,7,1};
    //cout<<"10 = "<<array[10]<<endl;
    for(int i = 0; i < 9; ++i)
    {
        for(int j = 0; j < 10 - i; ++j)
        {
            if(array[j] < array[j + 1])
            {
                cout<<"array[j] = "<<array[j]<<endl;
                help = array[j];
                array[j] = array[j + 1];
                array[j + 1] = help;
            }
        }
    }
    //cout<<"----"<<endl;
    for(int i = 0; i < 10 ;++i)
    {
        cout<<array[i]<<endl;
    }
    //cout<<"size"<<sizeof(array)<<endl;
    return 0;
}