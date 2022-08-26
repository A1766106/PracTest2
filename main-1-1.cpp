#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

extern int *array_pad(int *vals, int len);

int main()
{
    int vals[]={1,2,3,4,5};
    int length = 5;
    int *pv=array_pad(vals,5);

    for(int i=0;i<length+2; i++)
    {
        cout << *(pv+i) << endl;
    }

    return 0;
}