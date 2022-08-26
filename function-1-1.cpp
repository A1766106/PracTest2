#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int *array_pad(int *vals, int len)
{
    int *pv;
    pv = new int[len];
    *pv = *vals;
    for(int i=1;i<len+1;i++)
    {
        cin >> *(pv+i);
    }
    *(pv+len+2) = *(vals+len);
    return pv;
 }


