#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int *array_pad(int *vals, int len)
{
    int *pv;
    pv = new int[len+2];
    *pv = *vals;
    for(int i=1;i<len+1;i++)
    {
        *(pv+i) = *(vals-1);
    }
    *(pv+len+1) = *(vals+len-1);
    return pv;
 }


