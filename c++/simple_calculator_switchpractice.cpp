#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    float n1 = 0;
    float n2 = 0;
    char way = 0;
    cout<<"the phrase"<<endl;
    cin>>n1>>way>>n2;
    switch (way)
    {
        case '+':
            cout<<n1 + n2<<endl;
            break;

        case '-':
            cout<<n1 - n2<<endl;
            break;

        case '*':
            cout<<n1 * n2<<endl;
            break; 
        case '/':
            if( n2 != 0)
            {
                cout<<n1 / n2<<endl;
                break;
            }
            else
            {
                cout<<"divided by zero"<<endl;
                break;
            }
        default:
            cout<<"wrong operator"<<endl;
            break;
    }
    return 0;
}